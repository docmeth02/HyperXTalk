/* Copyright (C) 2024 HyperXTalk Contributors

This file is part of HyperXTalk.

HyperXTalk is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License v3 as published by the Free
Software Foundation.  */

#include "prefix.h"

#include "globdefs.h"
#include "objdefs.h"
#include "parsedef.h"
#include "filedefs.h"
#include "mcio.h"

#include "globals.h"
#include "dispatch.h"
#include "stack.h"
#include "object.h"
#include "param.h"
#include "exec.h"
#include "osspec.h"
#include "securemode.h"
#include "variable.h"

#include "executionerrors.h"

#include "mcworker.h"

// ---------------------------------------------------------------------------
// MCWorker
// ---------------------------------------------------------------------------

MCWorker::MCWorker(MCStringRef p_name)
    : next(nullptr), m_stack(nullptr)
{
    m_name = MCValueRetain(p_name);
}

MCWorker::~MCWorker()
{
    MCValueRelease(m_name);
    // m_stack is owned by MCdispatcher — do not delete here.
}

// ---------------------------------------------------------------------------
// Registry
// ---------------------------------------------------------------------------

static MCWorker *s_worker_list = nullptr;

void MCWorkerRegistryInitialize()
{
    s_worker_list = nullptr;
}

void MCWorkerRegistryFinalize()
{
    MCWorker *t_worker = s_worker_list;
    while (t_worker != nullptr)
    {
        MCWorker *t_next = t_worker->next;
        delete t_worker;
        t_worker = t_next;
    }
    s_worker_list = nullptr;
}

MCWorker *MCWorkerFind(MCStringRef p_name)
{
    for (MCWorker *t_w = s_worker_list; t_w != nullptr; t_w = t_w->next)
    {
        if (MCStringIsEqualTo(t_w->GetName(), p_name, kMCStringOptionCompareCaseless))
            return t_w;
    }
    return nullptr;
}

void MCWorkerAdd(MCWorker *p_worker)
{
    p_worker->next = s_worker_list;
    s_worker_list  = p_worker;
}

void MCWorkerRemove(MCStringRef p_name)
{
    MCWorker **t_prev = &s_worker_list;
    for (MCWorker *t_w = s_worker_list; t_w != nullptr; t_w = t_w->next)
    {
        if (MCStringIsEqualTo(t_w->GetName(), p_name, kMCStringOptionCompareCaseless))
        {
            *t_prev = t_w->next;
            delete t_w;
            return;
        }
        t_prev = &t_w->next;
    }
}

// ---------------------------------------------------------------------------
// Exec helpers
// ---------------------------------------------------------------------------

void MCWorkerExecCreate(MCExecContext &ctxt,
                        MCStringRef    p_name,
                        MCStringRef    p_script_file)
{
    // Reject duplicate names.
    if (MCWorkerFind(p_name) != nullptr)
    {
        ctxt.LegacyThrow(EE_CREATE_WORKEREXISTS);
        return;
    }

    // Create a hidden script-only stack to host the worker's script.
    MCStack *t_stack = nullptr;
    MCStackSecurityCreateStack(t_stack);
    if (t_stack == nullptr)
    {
        ctxt.LegacyThrow(EE_CREATE_WORKERFAILED);
        return;
    }

    MCdispatcher->appendstack(t_stack);
    t_stack->setparent(MCdispatcher->gethome());
    t_stack->setflag(False, F_VISIBLE);
    t_stack->setasscriptonly(kMCEmptyString);

    // Give the backing stack a name that won't collide with user stacks.
    MCAutoStringRef t_stack_name;
    if (!MCStringFormat(&t_stack_name, "__worker_%@", p_name))
    {
        ctxt.LegacyThrow(EE_NO_MEMORY);
        return;
    }
    t_stack->setstringprop(ctxt, 0, P_NAME, False, *t_stack_name);

    // If a script file was provided, load it and set the stack's script.
    if (p_script_file != nullptr && !MCStringIsEmpty(p_script_file))
    {
        MCAutoStringRef t_script;
        if (MCS_loadtextfile(p_script_file, &t_script))
            t_stack->setstringprop(ctxt, 0, P_SCRIPT, False, *t_script);
        // A missing / unreadable file is not fatal — the worker exists but
        // its script will be empty.  The caller can set the scriptFile
        // property later once the file is available.
    }

    // Register the worker.
    MCWorker *t_worker = new (nothrow) MCWorker(p_name);
    if (t_worker == nullptr)
    {
        ctxt.LegacyThrow(EE_NO_MEMORY);
        return;
    }
    t_worker->SetStack(t_stack);
    MCWorkerAdd(t_worker);

    // Set 'it' to the worker name so the calling script can refer to it.
    ctxt.SetItToValue(p_name);
}

void MCWorkerExecDispatch(MCExecContext &ctxt,
                          MCStringRef    p_worker_name,
                          MCNameRef      p_message,
                          bool           p_is_function,
                          MCParameter   *p_params)
{
    // Resolve the worker.
    MCWorker *t_worker = MCWorkerFind(p_worker_name);
    if (t_worker == nullptr)
    {
        ctxt.LegacyThrow(EE_DISPATCH_WORKERNOTFOUND);
        return;
    }

    // Build an MCObjectPtr targeting the worker's backing stack.
    MCObjectPtr t_target;
    t_target.object  = t_worker->GetStack();
    t_target.part_id = 0;

    // Evaluate parameters and dispatch via the standard engine pathway.
    // container_count is not available here, so we let
    // MCKeywordsExecSetupCommandOrFunction handle the param count itself.
    uint32_t t_container_count = 0;
    if (p_params != nullptr)
        t_container_count = p_params->count_containers();

    MCAutoPointer<MCContainer[]> t_containers = new MCContainer[t_container_count];
    if (!t_containers)
    {
        ctxt.LegacyThrow(EE_NO_MEMORY);
        return;
    }

    if (MCKeywordsExecSetupCommandOrFunction(ctxt,
                                             p_params,
                                             *t_containers,
                                             0, 0,
                                             p_is_function))
    {
        if (!ctxt.HasError())
        {
            MCEngineExecDispatch(ctxt,
                                 p_is_function ? HT_FUNCTION : HT_MESSAGE,
                                 p_message,
                                 &t_target,
                                 p_params);
        }
    }

    MCKeywordsExecTeardownCommandOrFunction(p_params);
}

void MCWorkerExecDestroy(MCExecContext &ctxt,
                         MCStringRef    p_name)
{
    MCWorker *t_worker = MCWorkerFind(p_name);
    if (t_worker == nullptr)
    {
        ctxt.LegacyThrow(EE_DISPATCH_WORKERNOTFOUND);
        return;
    }

    // Remove the backing stack from the dispatcher.
    MCStack *t_stack = t_worker->GetStack();
    if (t_stack != nullptr)
        MCdispatcher->destroystack(t_stack, False);

    MCWorkerRemove(p_name);
}
