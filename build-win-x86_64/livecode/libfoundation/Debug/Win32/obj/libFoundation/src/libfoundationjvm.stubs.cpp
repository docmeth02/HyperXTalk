#include <stdlib.h>
#include <stdio.h>
#include <cstring>

#define SYMBOL_PREFIX

typedef void *module_t;
typedef void *handler_t;

#ifdef _DEBUG
#include <stdint.h>
extern void __MCLog(const char *file, uint32_t line, const char *format, ...);
#define MCLog(...) __MCLog(__FILE__, __LINE__, __VA_ARGS__)
#else
#define MCLog(...) (void) (__VA_ARGS__)
#endif
#define kMCStringEncodingUTF8 4
extern "C" bool MCStringCreateWithBytes(const char *, unsigned int, int, bool, void*&);
extern "C" void MCValueRelease(void *);
extern "C" bool MCSLibraryCreateWithPath(void *, void*&);
extern "C" void *MCSLibraryLookupSymbol(void *, void *);

static void *MCSupportLibraryLoad(const char *p_name_cstr)
{
  void *t_name;
  if (!MCStringCreateWithBytes(p_name_cstr, strlen(p_name_cstr), kMCStringEncodingUTF8, false, t_name))
    return NULL;
  void *t_handle;
  if (!MCSLibraryCreateWithPath(t_name, t_handle))
  {
    t_handle = NULL;
  }
  MCValueRelease(t_name);
  return t_handle;
}

static void MCSupportLibraryUnload(void *p_handle)
{
  if (p_handle != NULL)
    MCValueRelease(p_handle);
}

static void *MCSupportLibraryLookupSymbol(void *p_handle, const char *p_name_cstr)
{
  void *t_symbol_name;
  if (!MCStringCreateWithBytes(p_name_cstr, strlen(p_name_cstr), kMCStringEncodingUTF8, false, t_symbol_name))
    return NULL;
  void *t_symbol;
  t_symbol = MCSLibraryLookupSymbol(p_handle, t_symbol_name);
  MCValueRelease(t_symbol_name);
  return t_symbol;
}

extern "C"
{

static int module_load(const char *p_source, module_t *r_module)
{
  module_t t_module;
 	t_module = (module_t)MCSupportLibraryLoad(p_source);
  if (t_module == NULL)
    return 0;
  *r_module = t_module;
  return 1;
}

static int module_unload(module_t p_module)
{
  MCSupportLibraryUnload(p_module);
  return 1;
}

static int module_resolve(module_t p_module, const char *p_name, handler_t *r_handler)
{
  handler_t t_handler;
    t_handler = MCSupportLibraryLookupSymbol(p_module, p_name);
  if (t_handler == NULL)
    return 0;
  *r_handler = t_handler;
  return 1;
}


#if defined(_LINUX)
static void failed_required_link(const char* libname, const char* liblist)
{
  const char* dialog =
    "zenity --error --title \"$TITLE\" --text \"$TEXT\" 2>/dev/null 1>/dev/null && "
    "echo \"wm state . withdrawn ; tk_messageBox -icon error -message \\\"$TEXT\\\" -title \\\"$TITLE\\\" -type ok ; exit \" | wish && "
    "xmessage -center -buttons OK -default OK \"$TITLE:\" \"$TEXT\"" 
	;

  char* error = new char[65536];
  char* command = new char[65536];

  snprintf(error, 65536, "Failed to load library \'%s\' (tried %s)", libname, liblist);
  snprintf(command, 65536, "TITLE=\"LiveCode startup error\" TEXT=\"%s\" /bin/sh -c \'%s\' &", error, dialog);
  MCLog( "Fatal: failed to load library \'%s\' (tried %s)\n", libname, liblist);
  int ignored = system(command); (void)ignored;
  exit(-1);
}
#endif

typedef void (*JNI_GetDefaultJavaVMInitArgs_t)(void *pArg0);
JNI_GetDefaultJavaVMInitArgs_t JNI_GetDefaultJavaVMInitArgs_ptr = NULL;
typedef int (*JNI_CreateJavaVM_t)(void *pArg0, void *pArg1, void *pArg2);
JNI_CreateJavaVM_t JNI_CreateJavaVM_ptr = NULL;

#if defined(_MACOSX) || defined(TARGET_SUBPLATFORM_IPHONE)
#define MODULE_JVM_NAME ""
#elif defined(_LINUX) || defined(__EMSCRIPTEN__)
#define MODULE_JVM_NAME ""
#elif defined(TARGET_SUBPLATFORM_ANDROID)
#define MODULE_JVM_NAME ""
#elif defined(_WINDOWS)
#define MODULE_JVM_NAME ""
#endif

static module_t module_jvm = NULL;

void finalise_weak_link_jvm(void)
{
  module_unload(module_jvm);
  module_jvm = NULL;
}

int initialise_weak_link_jvm_with_path(const char *p_path)
{
  module_jvm = NULL;
  if (!module_load(p_path, &module_jvm))
  {
  #ifdef _DEBUG
    MCLog( "Unable to load library: %s\n", p_path);
  #endif
    goto err;
  }
  if (!module_resolve(module_jvm, SYMBOL_PREFIX "JNI_GetDefaultJavaVMInitArgs", (handler_t *)&JNI_GetDefaultJavaVMInitArgs_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: JNI_GetDefaultJavaVMInitArgs\n");
#endif
goto err; 
}
  if (!module_resolve(module_jvm, SYMBOL_PREFIX "JNI_CreateJavaVM", (handler_t *)&JNI_CreateJavaVM_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: JNI_CreateJavaVM\n");
#endif
goto err; 
}

  return 1;

err:
  if (module_jvm != NULL)
    module_unload(module_jvm);

  return 0;
}

int initialise_weak_link_jvm(void)
{
#if defined(_LINUX)
  if(!initialise_weak_link_jvm_with_path(""))
#else
  if (!initialise_weak_link_jvm_with_path(MODULE_JVM_NAME))
#endif
{
#ifdef _DEBUG
    MCLog( "Warning: could not load library: \n");
#endif
return 0;
}
return -1;
}

#if defined(_LINUX)
void initialise_required_weak_link_jvm(void)
{
  if (!initialise_weak_link_jvm())
  {
    failed_required_link("jvm", "");
  }
}
#endif

void JNI_GetDefaultJavaVMInitArgs(void *pArg0)
{
  JNI_GetDefaultJavaVMInitArgs_ptr(pArg0);
}

int JNI_CreateJavaVM(void *pArg0, void *pArg1, void *pArg2)
{
  return JNI_CreateJavaVM_ptr(pArg0, pArg1, pArg2);
}

}
