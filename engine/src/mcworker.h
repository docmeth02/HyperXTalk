/* Copyright (C) 2024 HyperXTalk Contributors

This file is part of HyperXTalk.

HyperXTalk is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License v3 as published by the Free
Software Foundation.  */

#ifndef __MC_WORKER_H__
#define __MC_WORKER_H__

class MCStack;
class MCExecContext;
class MCParameter;

/* MCWorker
 *
 * Represents a named worker — an isolated script context backed by a
 * script-only stack.  Workers are created with:
 *
 *   create worker <name> [from <scriptfile>]
 *
 * and targeted by the extended dispatch syntax:
 *
 *   dispatch <message> to worker <name> [with <params>]
 *
 * Workers are registered in a global registry and are looked up by name.
 * The backing stack is owned by MCdispatcher and lives for the lifetime
 * of the worker.
 */
class MCWorker
{
public:
    MCWorker(MCStringRef p_name);
    ~MCWorker();

    MCStringRef GetName()  const { return m_name; }
    MCStack    *GetStack() const { return m_stack; }
    void        SetStack(MCStack *p_stack) { m_stack = p_stack; }

    // Intrusive linked list for the registry.
    MCWorker *next;

private:
    MCStringRef  m_name;
    MCStack     *m_stack; // Not owned — managed by MCdispatcher.
};

// ---------------------------------------------------------------------------
// Registry
// ---------------------------------------------------------------------------

void      MCWorkerRegistryInitialize();
void      MCWorkerRegistryFinalize();

MCWorker *MCWorkerFind(MCStringRef p_name);
void      MCWorkerAdd(MCWorker *p_worker);
void      MCWorkerRemove(MCStringRef p_name);

// ---------------------------------------------------------------------------
// Engine exec helpers — called from cmdsc.cpp and cmdse.cpp
// ---------------------------------------------------------------------------

// 'create worker <name> [from <scriptfile>]'
void MCWorkerExecCreate(MCExecContext &ctxt,
                        MCStringRef    p_name,
                        MCStringRef    p_script_file); // may be nil

// 'dispatch <message> to worker <name> [with <params>]'
void MCWorkerExecDispatch(MCExecContext &ctxt,
                          MCStringRef    p_worker_name,
                          MCNameRef      p_message,
                          bool           p_is_function,
                          MCParameter   *p_params);

// 'destroy worker <name>'  (available for future 'destroy' command support)
void MCWorkerExecDestroy(MCExecContext &ctxt,
                         MCStringRef    p_name);

#endif /* __MC_WORKER_H__ */
