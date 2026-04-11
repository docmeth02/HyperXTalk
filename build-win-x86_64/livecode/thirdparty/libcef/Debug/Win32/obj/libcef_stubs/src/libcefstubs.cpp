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
extern "C" void *MCSupportLibraryLoad(const char *);
extern "C" void MCSupportLibraryUnload(void *);
extern "C" void *MCSupportLibraryLookupSymbol(void *, const char *);

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

typedef int (*cef_add_cross_origin_whitelist_entry_t)(void *pArg0, void *pArg1, void *pArg2, int pArg3);
cef_add_cross_origin_whitelist_entry_t cef_add_cross_origin_whitelist_entry_ptr = NULL;
typedef void *(*cef_api_hash_t)(int pArg0);
cef_api_hash_t cef_api_hash_ptr = NULL;
typedef void *(*cef_base64decode_t)(void *pArg0);
cef_base64decode_t cef_base64decode_ptr = NULL;
typedef void *(*cef_base64encode_t)(void *pArg0, size_t pArg1);
cef_base64encode_t cef_base64encode_ptr = NULL;
typedef int (*cef_begin_tracing_t)(void *pArg0, void *pArg1);
cef_begin_tracing_t cef_begin_tracing_ptr = NULL;
typedef void *(*cef_binary_value_create_t)(void *pArg0, size_t pArg1);
cef_binary_value_create_t cef_binary_value_create_ptr = NULL;
typedef int (*cef_browser_host_create_browser_t)(void *pArg0, void *pArg1, void *pArg2, void *pArg3, void *pArg4);
cef_browser_host_create_browser_t cef_browser_host_create_browser_ptr = NULL;
typedef void *(*cef_browser_host_create_browser_sync_t)(void *pArg0, void *pArg1, void *pArg2, void *pArg3, void *pArg4);
cef_browser_host_create_browser_sync_t cef_browser_host_create_browser_sync_ptr = NULL;
typedef void *(*cef_browser_view_create_t)(void *pArg0, void *pArg1, void *pArg2, void *pArg3, void *pArg4);
cef_browser_view_create_t cef_browser_view_create_ptr = NULL;
typedef void *(*cef_browser_view_get_for_browser_t)(void *pArg0);
cef_browser_view_get_for_browser_t cef_browser_view_get_for_browser_ptr = NULL;
typedef int (*cef_clear_cross_origin_whitelist_t)(void);
cef_clear_cross_origin_whitelist_t cef_clear_cross_origin_whitelist_ptr = NULL;
typedef int (*cef_clear_scheme_handler_factories_t)(void);
cef_clear_scheme_handler_factories_t cef_clear_scheme_handler_factories_ptr = NULL;
typedef void *(*cef_command_line_create_t)(void);
cef_command_line_create_t cef_command_line_create_ptr = NULL;
typedef void *(*cef_command_line_get_global_t)(void);
cef_command_line_get_global_t cef_command_line_get_global_ptr = NULL;
typedef void *(*cef_cookie_manager_create_manager_t)(void *pArg0, int pArg1, void *pArg2);
cef_cookie_manager_create_manager_t cef_cookie_manager_create_manager_ptr = NULL;
typedef void *(*cef_cookie_manager_get_blocking_manager_t)(void);
cef_cookie_manager_get_blocking_manager_t cef_cookie_manager_get_blocking_manager_ptr = NULL;
typedef void *(*cef_cookie_manager_get_global_manager_t)(void *pArg0);
cef_cookie_manager_get_global_manager_t cef_cookie_manager_get_global_manager_ptr = NULL;
typedef int (*cef_crash_reporting_enabled_t)(void);
cef_crash_reporting_enabled_t cef_crash_reporting_enabled_ptr = NULL;
typedef void *(*cef_create_context_shared_t)(void *pArg0, void *pArg1);
cef_create_context_shared_t cef_create_context_shared_ptr = NULL;
typedef int (*cef_create_directory_t)(void *pArg0);
cef_create_directory_t cef_create_directory_ptr = NULL;
typedef int (*cef_create_new_temp_directory_t)(void *pArg0, void *pArg1);
cef_create_new_temp_directory_t cef_create_new_temp_directory_ptr = NULL;
typedef int (*cef_create_temp_directory_in_directory_t)(void *pArg0, void *pArg1, void *pArg2);
cef_create_temp_directory_in_directory_t cef_create_temp_directory_in_directory_ptr = NULL;
typedef int (*cef_create_url_t)(void *pArg0, void *pArg1);
cef_create_url_t cef_create_url_ptr = NULL;
typedef int (*cef_currently_on_t)(int pArg0);
cef_currently_on_t cef_currently_on_ptr = NULL;
typedef int (*cef_delete_file_t)(void *pArg0, int pArg1);
cef_delete_file_t cef_delete_file_ptr = NULL;
typedef void *(*cef_dictionary_value_create_t)(void);
cef_dictionary_value_create_t cef_dictionary_value_create_ptr = NULL;
typedef int (*cef_directory_exists_t)(void *pArg0);
cef_directory_exists_t cef_directory_exists_ptr = NULL;
typedef void (*cef_display_get_alls_t)(void *pArg0, void *pArg1);
cef_display_get_alls_t cef_display_get_alls_ptr = NULL;
typedef size_t (*cef_display_get_count_t)(void);
cef_display_get_count_t cef_display_get_count_ptr = NULL;
typedef void *(*cef_display_get_matching_bounds_t)(void *pArg0, int pArg1);
cef_display_get_matching_bounds_t cef_display_get_matching_bounds_ptr = NULL;
typedef void *(*cef_display_get_nearest_point_t)(void *pArg0, int pArg1);
cef_display_get_nearest_point_t cef_display_get_nearest_point_ptr = NULL;
typedef void *(*cef_display_get_primary_t)(void);
cef_display_get_primary_t cef_display_get_primary_ptr = NULL;
typedef void (*cef_do_message_loop_work_t)(void);
cef_do_message_loop_work_t cef_do_message_loop_work_ptr = NULL;
typedef void *(*cef_drag_data_create_t)(void);
cef_drag_data_create_t cef_drag_data_create_ptr = NULL;
typedef void (*cef_enable_highdpi_support_t)(void);
cef_enable_highdpi_support_t cef_enable_highdpi_support_ptr = NULL;
typedef int (*cef_end_tracing_t)(void *pArg0, void *pArg1);
cef_end_tracing_t cef_end_tracing_ptr = NULL;
typedef void (*cef_execute_java_script_with_user_gesture_for_tests_t)(void *pArg0, void *pArg1);
cef_execute_java_script_with_user_gesture_for_tests_t cef_execute_java_script_with_user_gesture_for_tests_ptr = NULL;
typedef int (*cef_execute_process_t)(void *pArg0, void *pArg1, void *pArg2);
cef_execute_process_t cef_execute_process_ptr = NULL;
typedef void *(*cef_format_url_for_security_display_t)(void *pArg0);
cef_format_url_for_security_display_t cef_format_url_for_security_display_ptr = NULL;
typedef int (*cef_get_current_platform_thread_handle_t)(void);
cef_get_current_platform_thread_handle_t cef_get_current_platform_thread_handle_ptr = NULL;
typedef int (*cef_get_current_platform_thread_id_t)(void);
cef_get_current_platform_thread_id_t cef_get_current_platform_thread_id_ptr = NULL;
typedef void (*cef_get_extensions_for_mime_type_t)(void *pArg0, void *pArg1);
cef_get_extensions_for_mime_type_t cef_get_extensions_for_mime_type_ptr = NULL;
typedef void *(*cef_get_mime_type_t)(void *pArg0);
cef_get_mime_type_t cef_get_mime_type_ptr = NULL;
typedef int (*cef_get_min_log_level_t)(void);
cef_get_min_log_level_t cef_get_min_log_level_ptr = NULL;
typedef int (*cef_get_path_t)(int pArg0, void *pArg1);
cef_get_path_t cef_get_path_ptr = NULL;
typedef int (*cef_get_temp_directory_t)(void *pArg0);
cef_get_temp_directory_t cef_get_temp_directory_ptr = NULL;
typedef int (*cef_get_vlog_level_t)(void *pArg0, size_t pArg1);
cef_get_vlog_level_t cef_get_vlog_level_ptr = NULL;
typedef void *(*cef_image_create_t)(void);
cef_image_create_t cef_image_create_ptr = NULL;
typedef int (*cef_initialize_t)(void *pArg0, void *pArg1, void *pArg2, void *pArg3);
cef_initialize_t cef_initialize_ptr = NULL;
typedef int (*cef_is_cert_status_error_t)(int pArg0);
cef_is_cert_status_error_t cef_is_cert_status_error_ptr = NULL;
typedef int (*cef_is_cert_status_minor_error_t)(int pArg0);
cef_is_cert_status_minor_error_t cef_is_cert_status_minor_error_ptr = NULL;
typedef void (*cef_is_web_plugin_unstable_t)(void *pArg0, void *pArg1);
cef_is_web_plugin_unstable_t cef_is_web_plugin_unstable_ptr = NULL;
typedef void *(*cef_label_button_create_t)(void *pArg0, void *pArg1, int pArg2);
cef_label_button_create_t cef_label_button_create_ptr = NULL;
typedef int (*cef_launch_process_t)(void *pArg0);
cef_launch_process_t cef_launch_process_ptr = NULL;
typedef void *(*cef_list_value_create_t)(void);
cef_list_value_create_t cef_list_value_create_ptr = NULL;
typedef void (*cef_load_crlsets_file_t)(void *pArg0);
cef_load_crlsets_file_t cef_load_crlsets_file_ptr = NULL;
typedef void (*cef_log_t)(void *pArg0, int pArg1, int pArg2, void *pArg3);
cef_log_t cef_log_ptr = NULL;
typedef void *(*cef_menu_button_create_t)(void *pArg0, void *pArg1, int pArg2);
cef_menu_button_create_t cef_menu_button_create_ptr = NULL;
typedef void *(*cef_menu_model_create_t)(void *pArg0);
cef_menu_model_create_t cef_menu_model_create_ptr = NULL;
typedef long long int (*cef_now_from_system_trace_time_t)(void);
cef_now_from_system_trace_time_t cef_now_from_system_trace_time_ptr = NULL;
typedef void *(*cef_panel_create_t)(void *pArg0);
cef_panel_create_t cef_panel_create_ptr = NULL;
typedef void *(*cef_parse_json_t)(void *pArg0, int pArg1);
cef_parse_json_t cef_parse_json_ptr = NULL;
typedef void *(*cef_parse_jsonand_return_error_t)(void *pArg0, int pArg1, void *pArg2, void *pArg3);
cef_parse_jsonand_return_error_t cef_parse_jsonand_return_error_ptr = NULL;
typedef int (*cef_parse_url_t)(void *pArg0, void *pArg1);
cef_parse_url_t cef_parse_url_ptr = NULL;
typedef void *(*cef_post_data_create_t)(void);
cef_post_data_create_t cef_post_data_create_ptr = NULL;
typedef void *(*cef_post_data_element_create_t)(void);
cef_post_data_element_create_t cef_post_data_element_create_ptr = NULL;
typedef int (*cef_post_delayed_task_t)(int pArg0, void *pArg1, long long int pArg2);
cef_post_delayed_task_t cef_post_delayed_task_ptr = NULL;
typedef int (*cef_post_task_t)(int pArg0, void *pArg1);
cef_post_task_t cef_post_task_ptr = NULL;
typedef void *(*cef_print_settings_create_t)(void);
cef_print_settings_create_t cef_print_settings_create_ptr = NULL;
typedef void *(*cef_process_message_create_t)(void *pArg0);
cef_process_message_create_t cef_process_message_create_ptr = NULL;
typedef void (*cef_quit_message_loop_t)(void);
cef_quit_message_loop_t cef_quit_message_loop_ptr = NULL;
typedef void (*cef_refresh_web_plugins_t)(void);
cef_refresh_web_plugins_t cef_refresh_web_plugins_ptr = NULL;
typedef int (*cef_register_extension_t)(void *pArg0, void *pArg1, void *pArg2);
cef_register_extension_t cef_register_extension_ptr = NULL;
typedef int (*cef_register_scheme_handler_factory_t)(void *pArg0, void *pArg1, void *pArg2);
cef_register_scheme_handler_factory_t cef_register_scheme_handler_factory_ptr = NULL;
typedef void (*cef_register_web_plugin_crash_t)(void *pArg0);
cef_register_web_plugin_crash_t cef_register_web_plugin_crash_ptr = NULL;
typedef void (*cef_register_widevine_cdm_t)(void *pArg0, void *pArg1);
cef_register_widevine_cdm_t cef_register_widevine_cdm_ptr = NULL;
typedef int (*cef_remove_cross_origin_whitelist_entry_t)(void *pArg0, void *pArg1, void *pArg2, int pArg3);
cef_remove_cross_origin_whitelist_entry_t cef_remove_cross_origin_whitelist_entry_ptr = NULL;
typedef void *(*cef_request_context_create_context_t)(void *pArg0, void *pArg1);
cef_request_context_create_context_t cef_request_context_create_context_ptr = NULL;
typedef void *(*cef_request_context_get_global_context_t)(void);
cef_request_context_get_global_context_t cef_request_context_get_global_context_ptr = NULL;
typedef void *(*cef_request_create_t)(void);
cef_request_create_t cef_request_create_ptr = NULL;
typedef void *(*cef_resource_bundle_get_global_t)(void);
cef_resource_bundle_get_global_t cef_resource_bundle_get_global_ptr = NULL;
typedef void *(*cef_response_create_t)(void);
cef_response_create_t cef_response_create_ptr = NULL;
typedef void (*cef_run_message_loop_t)(void);
cef_run_message_loop_t cef_run_message_loop_ptr = NULL;
typedef void *(*cef_scroll_view_create_t)(void *pArg0);
cef_scroll_view_create_t cef_scroll_view_create_ptr = NULL;
typedef void (*cef_server_create_t)(void *pArg0, int pArg1, int pArg2, void *pArg3);
cef_server_create_t cef_server_create_ptr = NULL;
typedef void (*cef_set_crash_key_value_t)(void *pArg0, void *pArg1);
cef_set_crash_key_value_t cef_set_crash_key_value_ptr = NULL;
typedef void (*cef_set_osmodal_loop_t)(int pArg0);
cef_set_osmodal_loop_t cef_set_osmodal_loop_ptr = NULL;
typedef void (*cef_shutdown_t)(void);
cef_shutdown_t cef_shutdown_ptr = NULL;
typedef void *(*cef_stream_reader_create_for_data_t)(void *pArg0, size_t pArg1);
cef_stream_reader_create_for_data_t cef_stream_reader_create_for_data_ptr = NULL;
typedef void *(*cef_stream_reader_create_for_file_t)(void *pArg0);
cef_stream_reader_create_for_file_t cef_stream_reader_create_for_file_ptr = NULL;
typedef void *(*cef_stream_reader_create_for_handler_t)(void *pArg0);
cef_stream_reader_create_for_handler_t cef_stream_reader_create_for_handler_ptr = NULL;
typedef void *(*cef_stream_writer_create_for_file_t)(void *pArg0);
cef_stream_writer_create_for_file_t cef_stream_writer_create_for_file_ptr = NULL;
typedef void *(*cef_stream_writer_create_for_handler_t)(void *pArg0);
cef_stream_writer_create_for_handler_t cef_stream_writer_create_for_handler_ptr = NULL;
typedef int (*cef_string_ascii_to_utf16_t)(void *pArg0, size_t pArg1, void *pArg2);
cef_string_ascii_to_utf16_t cef_string_ascii_to_utf16_ptr = NULL;
typedef int (*cef_string_ascii_to_wide_t)(void *pArg0, size_t pArg1, void *pArg2);
cef_string_ascii_to_wide_t cef_string_ascii_to_wide_ptr = NULL;
typedef void *(*cef_string_list_alloc_t)(void);
cef_string_list_alloc_t cef_string_list_alloc_ptr = NULL;
typedef void (*cef_string_list_append_t)(void *pArg0, void *pArg1);
cef_string_list_append_t cef_string_list_append_ptr = NULL;
typedef void (*cef_string_list_clear_t)(void *pArg0);
cef_string_list_clear_t cef_string_list_clear_ptr = NULL;
typedef void *(*cef_string_list_copy_t)(void *pArg0);
cef_string_list_copy_t cef_string_list_copy_ptr = NULL;
typedef void (*cef_string_list_free_t)(void *pArg0);
cef_string_list_free_t cef_string_list_free_ptr = NULL;
typedef size_t (*cef_string_list_size_t)(void *pArg0);
cef_string_list_size_t cef_string_list_size_ptr = NULL;
typedef int (*cef_string_list_value_t)(void *pArg0, size_t pArg1, void *pArg2);
cef_string_list_value_t cef_string_list_value_ptr = NULL;
typedef void *(*cef_string_map_alloc_t)(void);
cef_string_map_alloc_t cef_string_map_alloc_ptr = NULL;
typedef int (*cef_string_map_append_t)(void *pArg0, void *pArg1, void *pArg2);
cef_string_map_append_t cef_string_map_append_ptr = NULL;
typedef void (*cef_string_map_clear_t)(void *pArg0);
cef_string_map_clear_t cef_string_map_clear_ptr = NULL;
typedef int (*cef_string_map_find_t)(void *pArg0, void *pArg1, void *pArg2);
cef_string_map_find_t cef_string_map_find_ptr = NULL;
typedef void (*cef_string_map_free_t)(void *pArg0);
cef_string_map_free_t cef_string_map_free_ptr = NULL;
typedef int (*cef_string_map_key_t)(void *pArg0, size_t pArg1, void *pArg2);
cef_string_map_key_t cef_string_map_key_ptr = NULL;
typedef size_t (*cef_string_map_size_t)(void *pArg0);
cef_string_map_size_t cef_string_map_size_ptr = NULL;
typedef int (*cef_string_map_value_t)(void *pArg0, size_t pArg1, void *pArg2);
cef_string_map_value_t cef_string_map_value_ptr = NULL;
typedef void *(*cef_string_multimap_alloc_t)(void);
cef_string_multimap_alloc_t cef_string_multimap_alloc_ptr = NULL;
typedef int (*cef_string_multimap_append_t)(void *pArg0, void *pArg1, void *pArg2);
cef_string_multimap_append_t cef_string_multimap_append_ptr = NULL;
typedef void (*cef_string_multimap_clear_t)(void *pArg0);
cef_string_multimap_clear_t cef_string_multimap_clear_ptr = NULL;
typedef int (*cef_string_multimap_enumerate_t)(void *pArg0, void *pArg1, size_t pArg2, void *pArg3);
cef_string_multimap_enumerate_t cef_string_multimap_enumerate_ptr = NULL;
typedef size_t (*cef_string_multimap_find_count_t)(void *pArg0, void *pArg1);
cef_string_multimap_find_count_t cef_string_multimap_find_count_ptr = NULL;
typedef void (*cef_string_multimap_free_t)(void *pArg0);
cef_string_multimap_free_t cef_string_multimap_free_ptr = NULL;
typedef int (*cef_string_multimap_key_t)(void *pArg0, size_t pArg1, void *pArg2);
cef_string_multimap_key_t cef_string_multimap_key_ptr = NULL;
typedef size_t (*cef_string_multimap_size_t)(void *pArg0);
cef_string_multimap_size_t cef_string_multimap_size_ptr = NULL;
typedef int (*cef_string_multimap_value_t)(void *pArg0, size_t pArg1, void *pArg2);
cef_string_multimap_value_t cef_string_multimap_value_ptr = NULL;
typedef void *(*cef_string_userfree_utf16_alloc_t)(void);
cef_string_userfree_utf16_alloc_t cef_string_userfree_utf16_alloc_ptr = NULL;
typedef void (*cef_string_userfree_utf16_free_t)(void *pArg0);
cef_string_userfree_utf16_free_t cef_string_userfree_utf16_free_ptr = NULL;
typedef void *(*cef_string_userfree_utf8_alloc_t)(void);
cef_string_userfree_utf8_alloc_t cef_string_userfree_utf8_alloc_ptr = NULL;
typedef void (*cef_string_userfree_utf8_free_t)(void *pArg0);
cef_string_userfree_utf8_free_t cef_string_userfree_utf8_free_ptr = NULL;
typedef void *(*cef_string_userfree_wide_alloc_t)(void);
cef_string_userfree_wide_alloc_t cef_string_userfree_wide_alloc_ptr = NULL;
typedef void (*cef_string_userfree_wide_free_t)(void *pArg0);
cef_string_userfree_wide_free_t cef_string_userfree_wide_free_ptr = NULL;
typedef void (*cef_string_utf16_clear_t)(void *pArg0);
cef_string_utf16_clear_t cef_string_utf16_clear_ptr = NULL;
typedef int (*cef_string_utf16_cmp_t)(void *pArg0, void *pArg1);
cef_string_utf16_cmp_t cef_string_utf16_cmp_ptr = NULL;
typedef int (*cef_string_utf16_set_t)(void *pArg0, size_t pArg1, void *pArg2, int pArg3);
cef_string_utf16_set_t cef_string_utf16_set_ptr = NULL;
typedef int (*cef_string_utf16_to_lower_t)(void *pArg0, size_t pArg1, void *pArg2);
cef_string_utf16_to_lower_t cef_string_utf16_to_lower_ptr = NULL;
typedef int (*cef_string_utf16_to_upper_t)(void *pArg0, size_t pArg1, void *pArg2);
cef_string_utf16_to_upper_t cef_string_utf16_to_upper_ptr = NULL;
typedef int (*cef_string_utf16_to_utf8_t)(void *pArg0, size_t pArg1, void *pArg2);
cef_string_utf16_to_utf8_t cef_string_utf16_to_utf8_ptr = NULL;
typedef int (*cef_string_utf16_to_wide_t)(void *pArg0, size_t pArg1, void *pArg2);
cef_string_utf16_to_wide_t cef_string_utf16_to_wide_ptr = NULL;
typedef void (*cef_string_utf8_clear_t)(void *pArg0);
cef_string_utf8_clear_t cef_string_utf8_clear_ptr = NULL;
typedef int (*cef_string_utf8_cmp_t)(void *pArg0, void *pArg1);
cef_string_utf8_cmp_t cef_string_utf8_cmp_ptr = NULL;
typedef int (*cef_string_utf8_set_t)(void *pArg0, size_t pArg1, void *pArg2, int pArg3);
cef_string_utf8_set_t cef_string_utf8_set_ptr = NULL;
typedef int (*cef_string_utf8_to_utf16_t)(void *pArg0, size_t pArg1, void *pArg2);
cef_string_utf8_to_utf16_t cef_string_utf8_to_utf16_ptr = NULL;
typedef int (*cef_string_utf8_to_wide_t)(void *pArg0, size_t pArg1, void *pArg2);
cef_string_utf8_to_wide_t cef_string_utf8_to_wide_ptr = NULL;
typedef void (*cef_string_wide_clear_t)(void *pArg0);
cef_string_wide_clear_t cef_string_wide_clear_ptr = NULL;
typedef int (*cef_string_wide_cmp_t)(void *pArg0, void *pArg1);
cef_string_wide_cmp_t cef_string_wide_cmp_ptr = NULL;
typedef int (*cef_string_wide_set_t)(void *pArg0, size_t pArg1, void *pArg2, int pArg3);
cef_string_wide_set_t cef_string_wide_set_ptr = NULL;
typedef int (*cef_string_wide_to_utf16_t)(void *pArg0, size_t pArg1, void *pArg2);
cef_string_wide_to_utf16_t cef_string_wide_to_utf16_ptr = NULL;
typedef int (*cef_string_wide_to_utf8_t)(void *pArg0, size_t pArg1, void *pArg2);
cef_string_wide_to_utf8_t cef_string_wide_to_utf8_ptr = NULL;
typedef void *(*cef_task_runner_get_for_current_thread_t)(void);
cef_task_runner_get_for_current_thread_t cef_task_runner_get_for_current_thread_ptr = NULL;
typedef void *(*cef_task_runner_get_for_thread_t)(int pArg0);
cef_task_runner_get_for_thread_t cef_task_runner_get_for_thread_ptr = NULL;
typedef void *(*cef_textfield_create_t)(void *pArg0);
cef_textfield_create_t cef_textfield_create_ptr = NULL;
typedef void *(*cef_thread_create_t)(void *pArg0, int pArg1, int pArg2, int pArg3, int pArg4);
cef_thread_create_t cef_thread_create_ptr = NULL;
typedef int (*cef_time_delta_t)(void *pArg0, void *pArg1, void *pArg2);
cef_time_delta_t cef_time_delta_ptr = NULL;
typedef int (*cef_time_from_doublet_t)(double pArg0, void *pArg1);
cef_time_from_doublet_t cef_time_from_doublet_ptr = NULL;
typedef int (*cef_time_from_timet_t)(long long int pArg0, void *pArg1);
cef_time_from_timet_t cef_time_from_timet_ptr = NULL;
typedef int (*cef_time_now_t)(void *pArg0);
cef_time_now_t cef_time_now_ptr = NULL;
typedef int (*cef_time_to_doublet_t)(void *pArg0, void *pArg1);
cef_time_to_doublet_t cef_time_to_doublet_ptr = NULL;
typedef int (*cef_time_to_timet_t)(void *pArg0, void *pArg1);
cef_time_to_timet_t cef_time_to_timet_ptr = NULL;
typedef void (*cef_trace_counter_t)(void *pArg0, void *pArg1, void *pArg2, long long int pArg3, void *pArg4, long long int pArg5, int pArg6);
cef_trace_counter_t cef_trace_counter_ptr = NULL;
typedef void (*cef_trace_counter_id_t)(void *pArg0, void *pArg1, long long int pArg2, void *pArg3, long long int pArg4, void *pArg5, long long int pArg6, int pArg7);
cef_trace_counter_id_t cef_trace_counter_id_ptr = NULL;
typedef void (*cef_trace_event_async_begin_t)(void *pArg0, void *pArg1, long long int pArg2, void *pArg3, long long int pArg4, void *pArg5, long long int pArg6, int pArg7);
cef_trace_event_async_begin_t cef_trace_event_async_begin_ptr = NULL;
typedef void (*cef_trace_event_async_end_t)(void *pArg0, void *pArg1, long long int pArg2, void *pArg3, long long int pArg4, void *pArg5, long long int pArg6, int pArg7);
cef_trace_event_async_end_t cef_trace_event_async_end_ptr = NULL;
typedef void (*cef_trace_event_async_step_into_t)(void *pArg0, void *pArg1, long long int pArg2, long long int pArg3, void *pArg4, long long int pArg5, int pArg6);
cef_trace_event_async_step_into_t cef_trace_event_async_step_into_ptr = NULL;
typedef void (*cef_trace_event_async_step_past_t)(void *pArg0, void *pArg1, long long int pArg2, long long int pArg3, void *pArg4, long long int pArg5, int pArg6);
cef_trace_event_async_step_past_t cef_trace_event_async_step_past_ptr = NULL;
typedef void (*cef_trace_event_begin_t)(void *pArg0, void *pArg1, void *pArg2, long long int pArg3, void *pArg4, long long int pArg5, int pArg6);
cef_trace_event_begin_t cef_trace_event_begin_ptr = NULL;
typedef void (*cef_trace_event_end_t)(void *pArg0, void *pArg1, void *pArg2, long long int pArg3, void *pArg4, long long int pArg5, int pArg6);
cef_trace_event_end_t cef_trace_event_end_ptr = NULL;
typedef void (*cef_trace_event_instant_t)(void *pArg0, void *pArg1, void *pArg2, long long int pArg3, void *pArg4, long long int pArg5, int pArg6);
cef_trace_event_instant_t cef_trace_event_instant_ptr = NULL;
typedef void *(*cef_translator_test_create_t)(void);
cef_translator_test_create_t cef_translator_test_create_ptr = NULL;
typedef void *(*cef_translator_test_ref_ptr_library_child_child_create_t)(int pArg0, int pArg1, int pArg2);
cef_translator_test_ref_ptr_library_child_child_create_t cef_translator_test_ref_ptr_library_child_child_create_ptr = NULL;
typedef void *(*cef_translator_test_ref_ptr_library_child_create_t)(int pArg0, int pArg1);
cef_translator_test_ref_ptr_library_child_create_t cef_translator_test_ref_ptr_library_child_create_ptr = NULL;
typedef void *(*cef_translator_test_ref_ptr_library_create_t)(int pArg0);
cef_translator_test_ref_ptr_library_create_t cef_translator_test_ref_ptr_library_create_ptr = NULL;
typedef void *(*cef_translator_test_scoped_library_child_child_create_t)(int pArg0, int pArg1, int pArg2);
cef_translator_test_scoped_library_child_child_create_t cef_translator_test_scoped_library_child_child_create_ptr = NULL;
typedef void *(*cef_translator_test_scoped_library_child_create_t)(int pArg0, int pArg1);
cef_translator_test_scoped_library_child_create_t cef_translator_test_scoped_library_child_create_ptr = NULL;
typedef void *(*cef_translator_test_scoped_library_create_t)(int pArg0);
cef_translator_test_scoped_library_create_t cef_translator_test_scoped_library_create_ptr = NULL;
typedef void (*cef_unregister_internal_web_plugin_t)(void *pArg0);
cef_unregister_internal_web_plugin_t cef_unregister_internal_web_plugin_ptr = NULL;
typedef void *(*cef_uridecode_t)(void *pArg0, int pArg1, int pArg2);
cef_uridecode_t cef_uridecode_ptr = NULL;
typedef void *(*cef_uriencode_t)(void *pArg0, int pArg1);
cef_uriencode_t cef_uriencode_ptr = NULL;
typedef void *(*cef_urlrequest_create_t)(void *pArg0, void *pArg1, void *pArg2);
cef_urlrequest_create_t cef_urlrequest_create_ptr = NULL;
typedef void *(*cef_v8context_get_current_context_t)(void);
cef_v8context_get_current_context_t cef_v8context_get_current_context_ptr = NULL;
typedef void *(*cef_v8context_get_entered_context_t)(void);
cef_v8context_get_entered_context_t cef_v8context_get_entered_context_ptr = NULL;
typedef int (*cef_v8context_in_context_t)(void);
cef_v8context_in_context_t cef_v8context_in_context_ptr = NULL;
typedef void *(*cef_v8stack_trace_get_current_t)(int pArg0);
cef_v8stack_trace_get_current_t cef_v8stack_trace_get_current_ptr = NULL;
typedef void *(*cef_v8value_create_array_t)(int pArg0);
cef_v8value_create_array_t cef_v8value_create_array_ptr = NULL;
typedef void *(*cef_v8value_create_array_buffer_t)(void *pArg0, size_t pArg1, void *pArg2);
cef_v8value_create_array_buffer_t cef_v8value_create_array_buffer_ptr = NULL;
typedef void *(*cef_v8value_create_bool_t)(int pArg0);
cef_v8value_create_bool_t cef_v8value_create_bool_ptr = NULL;
typedef void *(*cef_v8value_create_date_t)(void *pArg0);
cef_v8value_create_date_t cef_v8value_create_date_ptr = NULL;
typedef void *(*cef_v8value_create_double_t)(double pArg0);
cef_v8value_create_double_t cef_v8value_create_double_ptr = NULL;
typedef void *(*cef_v8value_create_function_t)(void *pArg0, void *pArg1);
cef_v8value_create_function_t cef_v8value_create_function_ptr = NULL;
typedef void *(*cef_v8value_create_int_t)(int pArg0);
cef_v8value_create_int_t cef_v8value_create_int_ptr = NULL;
typedef void *(*cef_v8value_create_null_t)(void);
cef_v8value_create_null_t cef_v8value_create_null_ptr = NULL;
typedef void *(*cef_v8value_create_object_t)(void *pArg0, void *pArg1);
cef_v8value_create_object_t cef_v8value_create_object_ptr = NULL;
typedef void *(*cef_v8value_create_string_t)(void *pArg0);
cef_v8value_create_string_t cef_v8value_create_string_ptr = NULL;
typedef void *(*cef_v8value_create_uint_t)(int pArg0);
cef_v8value_create_uint_t cef_v8value_create_uint_ptr = NULL;
typedef void *(*cef_v8value_create_undefined_t)(void);
cef_v8value_create_undefined_t cef_v8value_create_undefined_ptr = NULL;
typedef void *(*cef_value_create_t)(void);
cef_value_create_t cef_value_create_ptr = NULL;
typedef int (*cef_version_info_t)(int pArg0);
cef_version_info_t cef_version_info_ptr = NULL;
typedef void (*cef_visit_web_plugin_info_t)(void *pArg0);
cef_visit_web_plugin_info_t cef_visit_web_plugin_info_ptr = NULL;
typedef void *(*cef_waitable_event_create_t)(int pArg0, int pArg1);
cef_waitable_event_create_t cef_waitable_event_create_ptr = NULL;
typedef void *(*cef_window_create_top_level_t)(void *pArg0);
cef_window_create_top_level_t cef_window_create_top_level_ptr = NULL;
typedef void *(*cef_write_json_t)(void *pArg0, int pArg1);
cef_write_json_t cef_write_json_ptr = NULL;
typedef void *(*cef_xml_reader_create_t)(void *pArg0, int pArg1, void *pArg2);
cef_xml_reader_create_t cef_xml_reader_create_ptr = NULL;
typedef int (*cef_zip_directory_t)(void *pArg0, void *pArg1, int pArg2);
cef_zip_directory_t cef_zip_directory_ptr = NULL;
typedef void *(*cef_zip_reader_create_t)(void *pArg0);
cef_zip_reader_create_t cef_zip_reader_create_ptr = NULL;

#if defined(_MACOSX) || defined(TARGET_SUBPLATFORM_IPHONE)
#define MODULE_CEF_NAME "./Externals/CEF/libcef"
#elif defined(_LINUX) || defined(__EMSCRIPTEN__)
#define MODULE_CEF_NAME "./Externals/CEF/libcef"
#elif defined(TARGET_SUBPLATFORM_ANDROID)
#define MODULE_CEF_NAME "./Externals/CEF/libcef"
#elif defined(_WINDOWS)
#define MODULE_CEF_NAME "./Externals/CEF/libcef"
#endif

static module_t module_cef = NULL;

void finalise_weak_link_cef(void)
{
  module_unload(module_cef);
  module_cef = NULL;
}

int initialise_weak_link_cef_with_path(const char *p_path)
{
  module_cef = NULL;
  if (!module_load(p_path, &module_cef))
  {
  #ifdef _DEBUG
    MCLog( "Unable to load library: %s\n", p_path);
  #endif
    goto err;
  }
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_add_cross_origin_whitelist_entry", (handler_t *)&cef_add_cross_origin_whitelist_entry_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_add_cross_origin_whitelist_entry\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_api_hash", (handler_t *)&cef_api_hash_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_api_hash\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_base64decode", (handler_t *)&cef_base64decode_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_base64decode\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_base64encode", (handler_t *)&cef_base64encode_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_base64encode\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_begin_tracing", (handler_t *)&cef_begin_tracing_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_begin_tracing\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_binary_value_create", (handler_t *)&cef_binary_value_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_binary_value_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_browser_host_create_browser", (handler_t *)&cef_browser_host_create_browser_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_browser_host_create_browser\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_browser_host_create_browser_sync", (handler_t *)&cef_browser_host_create_browser_sync_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_browser_host_create_browser_sync\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_browser_view_create", (handler_t *)&cef_browser_view_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_browser_view_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_browser_view_get_for_browser", (handler_t *)&cef_browser_view_get_for_browser_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_browser_view_get_for_browser\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_clear_cross_origin_whitelist", (handler_t *)&cef_clear_cross_origin_whitelist_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_clear_cross_origin_whitelist\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_clear_scheme_handler_factories", (handler_t *)&cef_clear_scheme_handler_factories_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_clear_scheme_handler_factories\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_command_line_create", (handler_t *)&cef_command_line_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_command_line_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_command_line_get_global", (handler_t *)&cef_command_line_get_global_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_command_line_get_global\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_cookie_manager_create_manager", (handler_t *)&cef_cookie_manager_create_manager_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_cookie_manager_create_manager\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_cookie_manager_get_blocking_manager", (handler_t *)&cef_cookie_manager_get_blocking_manager_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_cookie_manager_get_blocking_manager\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_cookie_manager_get_global_manager", (handler_t *)&cef_cookie_manager_get_global_manager_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_cookie_manager_get_global_manager\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_crash_reporting_enabled", (handler_t *)&cef_crash_reporting_enabled_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_crash_reporting_enabled\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_create_context_shared", (handler_t *)&cef_create_context_shared_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_create_context_shared\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_create_directory", (handler_t *)&cef_create_directory_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_create_directory\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_create_new_temp_directory", (handler_t *)&cef_create_new_temp_directory_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_create_new_temp_directory\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_create_temp_directory_in_directory", (handler_t *)&cef_create_temp_directory_in_directory_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_create_temp_directory_in_directory\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_create_url", (handler_t *)&cef_create_url_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_create_url\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_currently_on", (handler_t *)&cef_currently_on_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_currently_on\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_delete_file", (handler_t *)&cef_delete_file_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_delete_file\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_dictionary_value_create", (handler_t *)&cef_dictionary_value_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_dictionary_value_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_directory_exists", (handler_t *)&cef_directory_exists_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_directory_exists\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_display_get_alls", (handler_t *)&cef_display_get_alls_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_display_get_alls\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_display_get_count", (handler_t *)&cef_display_get_count_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_display_get_count\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_display_get_matching_bounds", (handler_t *)&cef_display_get_matching_bounds_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_display_get_matching_bounds\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_display_get_nearest_point", (handler_t *)&cef_display_get_nearest_point_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_display_get_nearest_point\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_display_get_primary", (handler_t *)&cef_display_get_primary_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_display_get_primary\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_do_message_loop_work", (handler_t *)&cef_do_message_loop_work_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_do_message_loop_work\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_drag_data_create", (handler_t *)&cef_drag_data_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_drag_data_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_enable_highdpi_support", (handler_t *)&cef_enable_highdpi_support_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_enable_highdpi_support\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_end_tracing", (handler_t *)&cef_end_tracing_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_end_tracing\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_execute_java_script_with_user_gesture_for_tests", (handler_t *)&cef_execute_java_script_with_user_gesture_for_tests_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_execute_java_script_with_user_gesture_for_tests\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_execute_process", (handler_t *)&cef_execute_process_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_execute_process\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_format_url_for_security_display", (handler_t *)&cef_format_url_for_security_display_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_format_url_for_security_display\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_get_current_platform_thread_handle", (handler_t *)&cef_get_current_platform_thread_handle_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_get_current_platform_thread_handle\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_get_current_platform_thread_id", (handler_t *)&cef_get_current_platform_thread_id_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_get_current_platform_thread_id\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_get_extensions_for_mime_type", (handler_t *)&cef_get_extensions_for_mime_type_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_get_extensions_for_mime_type\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_get_mime_type", (handler_t *)&cef_get_mime_type_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_get_mime_type\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_get_min_log_level", (handler_t *)&cef_get_min_log_level_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_get_min_log_level\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_get_path", (handler_t *)&cef_get_path_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_get_path\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_get_temp_directory", (handler_t *)&cef_get_temp_directory_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_get_temp_directory\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_get_vlog_level", (handler_t *)&cef_get_vlog_level_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_get_vlog_level\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_image_create", (handler_t *)&cef_image_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_image_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_initialize", (handler_t *)&cef_initialize_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_initialize\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_is_cert_status_error", (handler_t *)&cef_is_cert_status_error_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_is_cert_status_error\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_is_cert_status_minor_error", (handler_t *)&cef_is_cert_status_minor_error_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_is_cert_status_minor_error\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_is_web_plugin_unstable", (handler_t *)&cef_is_web_plugin_unstable_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_is_web_plugin_unstable\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_label_button_create", (handler_t *)&cef_label_button_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_label_button_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_launch_process", (handler_t *)&cef_launch_process_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_launch_process\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_list_value_create", (handler_t *)&cef_list_value_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_list_value_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_load_crlsets_file", (handler_t *)&cef_load_crlsets_file_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_load_crlsets_file\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_log", (handler_t *)&cef_log_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_log\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_menu_button_create", (handler_t *)&cef_menu_button_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_menu_button_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_menu_model_create", (handler_t *)&cef_menu_model_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_menu_model_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_now_from_system_trace_time", (handler_t *)&cef_now_from_system_trace_time_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_now_from_system_trace_time\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_panel_create", (handler_t *)&cef_panel_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_panel_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_parse_json", (handler_t *)&cef_parse_json_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_parse_json\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_parse_jsonand_return_error", (handler_t *)&cef_parse_jsonand_return_error_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_parse_jsonand_return_error\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_parse_url", (handler_t *)&cef_parse_url_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_parse_url\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_post_data_create", (handler_t *)&cef_post_data_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_post_data_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_post_data_element_create", (handler_t *)&cef_post_data_element_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_post_data_element_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_post_delayed_task", (handler_t *)&cef_post_delayed_task_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_post_delayed_task\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_post_task", (handler_t *)&cef_post_task_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_post_task\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_print_settings_create", (handler_t *)&cef_print_settings_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_print_settings_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_process_message_create", (handler_t *)&cef_process_message_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_process_message_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_quit_message_loop", (handler_t *)&cef_quit_message_loop_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_quit_message_loop\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_refresh_web_plugins", (handler_t *)&cef_refresh_web_plugins_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_refresh_web_plugins\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_register_extension", (handler_t *)&cef_register_extension_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_register_extension\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_register_scheme_handler_factory", (handler_t *)&cef_register_scheme_handler_factory_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_register_scheme_handler_factory\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_register_web_plugin_crash", (handler_t *)&cef_register_web_plugin_crash_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_register_web_plugin_crash\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_register_widevine_cdm", (handler_t *)&cef_register_widevine_cdm_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_register_widevine_cdm\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_remove_cross_origin_whitelist_entry", (handler_t *)&cef_remove_cross_origin_whitelist_entry_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_remove_cross_origin_whitelist_entry\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_request_context_create_context", (handler_t *)&cef_request_context_create_context_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_request_context_create_context\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_request_context_get_global_context", (handler_t *)&cef_request_context_get_global_context_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_request_context_get_global_context\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_request_create", (handler_t *)&cef_request_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_request_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_resource_bundle_get_global", (handler_t *)&cef_resource_bundle_get_global_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_resource_bundle_get_global\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_response_create", (handler_t *)&cef_response_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_response_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_run_message_loop", (handler_t *)&cef_run_message_loop_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_run_message_loop\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_scroll_view_create", (handler_t *)&cef_scroll_view_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_scroll_view_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_server_create", (handler_t *)&cef_server_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_server_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_set_crash_key_value", (handler_t *)&cef_set_crash_key_value_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_set_crash_key_value\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_set_osmodal_loop", (handler_t *)&cef_set_osmodal_loop_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_set_osmodal_loop\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_shutdown", (handler_t *)&cef_shutdown_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_shutdown\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_stream_reader_create_for_data", (handler_t *)&cef_stream_reader_create_for_data_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_stream_reader_create_for_data\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_stream_reader_create_for_file", (handler_t *)&cef_stream_reader_create_for_file_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_stream_reader_create_for_file\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_stream_reader_create_for_handler", (handler_t *)&cef_stream_reader_create_for_handler_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_stream_reader_create_for_handler\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_stream_writer_create_for_file", (handler_t *)&cef_stream_writer_create_for_file_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_stream_writer_create_for_file\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_stream_writer_create_for_handler", (handler_t *)&cef_stream_writer_create_for_handler_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_stream_writer_create_for_handler\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_ascii_to_utf16", (handler_t *)&cef_string_ascii_to_utf16_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_ascii_to_utf16\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_ascii_to_wide", (handler_t *)&cef_string_ascii_to_wide_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_ascii_to_wide\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_list_alloc", (handler_t *)&cef_string_list_alloc_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_list_alloc\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_list_append", (handler_t *)&cef_string_list_append_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_list_append\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_list_clear", (handler_t *)&cef_string_list_clear_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_list_clear\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_list_copy", (handler_t *)&cef_string_list_copy_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_list_copy\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_list_free", (handler_t *)&cef_string_list_free_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_list_free\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_list_size", (handler_t *)&cef_string_list_size_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_list_size\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_list_value", (handler_t *)&cef_string_list_value_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_list_value\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_map_alloc", (handler_t *)&cef_string_map_alloc_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_map_alloc\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_map_append", (handler_t *)&cef_string_map_append_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_map_append\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_map_clear", (handler_t *)&cef_string_map_clear_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_map_clear\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_map_find", (handler_t *)&cef_string_map_find_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_map_find\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_map_free", (handler_t *)&cef_string_map_free_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_map_free\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_map_key", (handler_t *)&cef_string_map_key_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_map_key\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_map_size", (handler_t *)&cef_string_map_size_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_map_size\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_map_value", (handler_t *)&cef_string_map_value_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_map_value\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_multimap_alloc", (handler_t *)&cef_string_multimap_alloc_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_multimap_alloc\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_multimap_append", (handler_t *)&cef_string_multimap_append_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_multimap_append\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_multimap_clear", (handler_t *)&cef_string_multimap_clear_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_multimap_clear\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_multimap_enumerate", (handler_t *)&cef_string_multimap_enumerate_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_multimap_enumerate\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_multimap_find_count", (handler_t *)&cef_string_multimap_find_count_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_multimap_find_count\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_multimap_free", (handler_t *)&cef_string_multimap_free_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_multimap_free\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_multimap_key", (handler_t *)&cef_string_multimap_key_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_multimap_key\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_multimap_size", (handler_t *)&cef_string_multimap_size_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_multimap_size\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_multimap_value", (handler_t *)&cef_string_multimap_value_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_multimap_value\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_userfree_utf16_alloc", (handler_t *)&cef_string_userfree_utf16_alloc_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_userfree_utf16_alloc\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_userfree_utf16_free", (handler_t *)&cef_string_userfree_utf16_free_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_userfree_utf16_free\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_userfree_utf8_alloc", (handler_t *)&cef_string_userfree_utf8_alloc_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_userfree_utf8_alloc\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_userfree_utf8_free", (handler_t *)&cef_string_userfree_utf8_free_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_userfree_utf8_free\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_userfree_wide_alloc", (handler_t *)&cef_string_userfree_wide_alloc_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_userfree_wide_alloc\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_userfree_wide_free", (handler_t *)&cef_string_userfree_wide_free_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_userfree_wide_free\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_utf16_clear", (handler_t *)&cef_string_utf16_clear_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_utf16_clear\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_utf16_cmp", (handler_t *)&cef_string_utf16_cmp_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_utf16_cmp\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_utf16_set", (handler_t *)&cef_string_utf16_set_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_utf16_set\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_utf16_to_lower", (handler_t *)&cef_string_utf16_to_lower_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_utf16_to_lower\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_utf16_to_upper", (handler_t *)&cef_string_utf16_to_upper_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_utf16_to_upper\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_utf16_to_utf8", (handler_t *)&cef_string_utf16_to_utf8_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_utf16_to_utf8\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_utf16_to_wide", (handler_t *)&cef_string_utf16_to_wide_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_utf16_to_wide\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_utf8_clear", (handler_t *)&cef_string_utf8_clear_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_utf8_clear\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_utf8_cmp", (handler_t *)&cef_string_utf8_cmp_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_utf8_cmp\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_utf8_set", (handler_t *)&cef_string_utf8_set_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_utf8_set\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_utf8_to_utf16", (handler_t *)&cef_string_utf8_to_utf16_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_utf8_to_utf16\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_utf8_to_wide", (handler_t *)&cef_string_utf8_to_wide_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_utf8_to_wide\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_wide_clear", (handler_t *)&cef_string_wide_clear_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_wide_clear\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_wide_cmp", (handler_t *)&cef_string_wide_cmp_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_wide_cmp\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_wide_set", (handler_t *)&cef_string_wide_set_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_wide_set\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_wide_to_utf16", (handler_t *)&cef_string_wide_to_utf16_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_wide_to_utf16\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_string_wide_to_utf8", (handler_t *)&cef_string_wide_to_utf8_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_string_wide_to_utf8\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_task_runner_get_for_current_thread", (handler_t *)&cef_task_runner_get_for_current_thread_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_task_runner_get_for_current_thread\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_task_runner_get_for_thread", (handler_t *)&cef_task_runner_get_for_thread_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_task_runner_get_for_thread\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_textfield_create", (handler_t *)&cef_textfield_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_textfield_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_thread_create", (handler_t *)&cef_thread_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_thread_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_time_delta", (handler_t *)&cef_time_delta_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_time_delta\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_time_from_doublet", (handler_t *)&cef_time_from_doublet_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_time_from_doublet\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_time_from_timet", (handler_t *)&cef_time_from_timet_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_time_from_timet\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_time_now", (handler_t *)&cef_time_now_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_time_now\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_time_to_doublet", (handler_t *)&cef_time_to_doublet_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_time_to_doublet\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_time_to_timet", (handler_t *)&cef_time_to_timet_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_time_to_timet\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_trace_counter", (handler_t *)&cef_trace_counter_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_trace_counter\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_trace_counter_id", (handler_t *)&cef_trace_counter_id_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_trace_counter_id\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_trace_event_async_begin", (handler_t *)&cef_trace_event_async_begin_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_trace_event_async_begin\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_trace_event_async_end", (handler_t *)&cef_trace_event_async_end_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_trace_event_async_end\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_trace_event_async_step_into", (handler_t *)&cef_trace_event_async_step_into_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_trace_event_async_step_into\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_trace_event_async_step_past", (handler_t *)&cef_trace_event_async_step_past_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_trace_event_async_step_past\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_trace_event_begin", (handler_t *)&cef_trace_event_begin_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_trace_event_begin\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_trace_event_end", (handler_t *)&cef_trace_event_end_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_trace_event_end\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_trace_event_instant", (handler_t *)&cef_trace_event_instant_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_trace_event_instant\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_translator_test_create", (handler_t *)&cef_translator_test_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_translator_test_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_translator_test_ref_ptr_library_child_child_create", (handler_t *)&cef_translator_test_ref_ptr_library_child_child_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_translator_test_ref_ptr_library_child_child_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_translator_test_ref_ptr_library_child_create", (handler_t *)&cef_translator_test_ref_ptr_library_child_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_translator_test_ref_ptr_library_child_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_translator_test_ref_ptr_library_create", (handler_t *)&cef_translator_test_ref_ptr_library_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_translator_test_ref_ptr_library_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_translator_test_scoped_library_child_child_create", (handler_t *)&cef_translator_test_scoped_library_child_child_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_translator_test_scoped_library_child_child_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_translator_test_scoped_library_child_create", (handler_t *)&cef_translator_test_scoped_library_child_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_translator_test_scoped_library_child_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_translator_test_scoped_library_create", (handler_t *)&cef_translator_test_scoped_library_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_translator_test_scoped_library_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_unregister_internal_web_plugin", (handler_t *)&cef_unregister_internal_web_plugin_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_unregister_internal_web_plugin\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_uridecode", (handler_t *)&cef_uridecode_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_uridecode\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_uriencode", (handler_t *)&cef_uriencode_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_uriencode\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_urlrequest_create", (handler_t *)&cef_urlrequest_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_urlrequest_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_v8context_get_current_context", (handler_t *)&cef_v8context_get_current_context_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_v8context_get_current_context\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_v8context_get_entered_context", (handler_t *)&cef_v8context_get_entered_context_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_v8context_get_entered_context\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_v8context_in_context", (handler_t *)&cef_v8context_in_context_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_v8context_in_context\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_v8stack_trace_get_current", (handler_t *)&cef_v8stack_trace_get_current_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_v8stack_trace_get_current\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_v8value_create_array", (handler_t *)&cef_v8value_create_array_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_v8value_create_array\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_v8value_create_array_buffer", (handler_t *)&cef_v8value_create_array_buffer_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_v8value_create_array_buffer\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_v8value_create_bool", (handler_t *)&cef_v8value_create_bool_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_v8value_create_bool\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_v8value_create_date", (handler_t *)&cef_v8value_create_date_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_v8value_create_date\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_v8value_create_double", (handler_t *)&cef_v8value_create_double_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_v8value_create_double\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_v8value_create_function", (handler_t *)&cef_v8value_create_function_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_v8value_create_function\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_v8value_create_int", (handler_t *)&cef_v8value_create_int_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_v8value_create_int\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_v8value_create_null", (handler_t *)&cef_v8value_create_null_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_v8value_create_null\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_v8value_create_object", (handler_t *)&cef_v8value_create_object_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_v8value_create_object\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_v8value_create_string", (handler_t *)&cef_v8value_create_string_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_v8value_create_string\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_v8value_create_uint", (handler_t *)&cef_v8value_create_uint_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_v8value_create_uint\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_v8value_create_undefined", (handler_t *)&cef_v8value_create_undefined_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_v8value_create_undefined\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_value_create", (handler_t *)&cef_value_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_value_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_version_info", (handler_t *)&cef_version_info_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_version_info\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_visit_web_plugin_info", (handler_t *)&cef_visit_web_plugin_info_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_visit_web_plugin_info\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_waitable_event_create", (handler_t *)&cef_waitable_event_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_waitable_event_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_window_create_top_level", (handler_t *)&cef_window_create_top_level_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_window_create_top_level\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_write_json", (handler_t *)&cef_write_json_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_write_json\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_xml_reader_create", (handler_t *)&cef_xml_reader_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_xml_reader_create\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_zip_directory", (handler_t *)&cef_zip_directory_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_zip_directory\n");
#endif
goto err; 
}
  if (!module_resolve(module_cef, SYMBOL_PREFIX "cef_zip_reader_create", (handler_t *)&cef_zip_reader_create_ptr))
{
#ifdef _DEBUG
MCLog( "Unable to load: cef_zip_reader_create\n");
#endif
goto err; 
}

  return 1;

err:
  if (module_cef != NULL)
    module_unload(module_cef);

  return 0;
}

int initialise_weak_link_cef(void)
{
#if defined(_LINUX)
  if(!initialise_weak_link_cef_with_path("./Externals/CEF/libcef"))
#else
  if (!initialise_weak_link_cef_with_path(MODULE_CEF_NAME))
#endif
{
#ifdef _DEBUG
    MCLog( "Warning: could not load library: ./Externals/CEF/libcef\n");
#endif
return 0;
}
return -1;
}

#if defined(_LINUX)
void initialise_required_weak_link_cef(void)
{
  if (!initialise_weak_link_cef())
  {
    failed_required_link("cef", "./Externals/CEF/libcef");
  }
}
#endif

int cef_add_cross_origin_whitelist_entry(void *pArg0, void *pArg1, void *pArg2, int pArg3)
{
  return cef_add_cross_origin_whitelist_entry_ptr(pArg0, pArg1, pArg2, pArg3);
}

void *cef_api_hash(int pArg0)
{
  return cef_api_hash_ptr(pArg0);
}

void *cef_base64decode(void *pArg0)
{
  return cef_base64decode_ptr(pArg0);
}

void *cef_base64encode(void *pArg0, size_t pArg1)
{
  return cef_base64encode_ptr(pArg0, pArg1);
}

int cef_begin_tracing(void *pArg0, void *pArg1)
{
  return cef_begin_tracing_ptr(pArg0, pArg1);
}

void *cef_binary_value_create(void *pArg0, size_t pArg1)
{
  return cef_binary_value_create_ptr(pArg0, pArg1);
}

int cef_browser_host_create_browser(void *pArg0, void *pArg1, void *pArg2, void *pArg3, void *pArg4)
{
  return cef_browser_host_create_browser_ptr(pArg0, pArg1, pArg2, pArg3, pArg4);
}

void *cef_browser_host_create_browser_sync(void *pArg0, void *pArg1, void *pArg2, void *pArg3, void *pArg4)
{
  return cef_browser_host_create_browser_sync_ptr(pArg0, pArg1, pArg2, pArg3, pArg4);
}

void *cef_browser_view_create(void *pArg0, void *pArg1, void *pArg2, void *pArg3, void *pArg4)
{
  return cef_browser_view_create_ptr(pArg0, pArg1, pArg2, pArg3, pArg4);
}

void *cef_browser_view_get_for_browser(void *pArg0)
{
  return cef_browser_view_get_for_browser_ptr(pArg0);
}

int cef_clear_cross_origin_whitelist(void)
{
  return cef_clear_cross_origin_whitelist_ptr();
}

int cef_clear_scheme_handler_factories(void)
{
  return cef_clear_scheme_handler_factories_ptr();
}

void *cef_command_line_create(void)
{
  return cef_command_line_create_ptr();
}

void *cef_command_line_get_global(void)
{
  return cef_command_line_get_global_ptr();
}

void *cef_cookie_manager_create_manager(void *pArg0, int pArg1, void *pArg2)
{
  return cef_cookie_manager_create_manager_ptr(pArg0, pArg1, pArg2);
}

void *cef_cookie_manager_get_blocking_manager(void)
{
  return cef_cookie_manager_get_blocking_manager_ptr();
}

void *cef_cookie_manager_get_global_manager(void *pArg0)
{
  return cef_cookie_manager_get_global_manager_ptr(pArg0);
}

int cef_crash_reporting_enabled(void)
{
  return cef_crash_reporting_enabled_ptr();
}

void *cef_create_context_shared(void *pArg0, void *pArg1)
{
  return cef_create_context_shared_ptr(pArg0, pArg1);
}

int cef_create_directory(void *pArg0)
{
  return cef_create_directory_ptr(pArg0);
}

int cef_create_new_temp_directory(void *pArg0, void *pArg1)
{
  return cef_create_new_temp_directory_ptr(pArg0, pArg1);
}

int cef_create_temp_directory_in_directory(void *pArg0, void *pArg1, void *pArg2)
{
  return cef_create_temp_directory_in_directory_ptr(pArg0, pArg1, pArg2);
}

int cef_create_url(void *pArg0, void *pArg1)
{
  return cef_create_url_ptr(pArg0, pArg1);
}

int cef_currently_on(int pArg0)
{
  return cef_currently_on_ptr(pArg0);
}

int cef_delete_file(void *pArg0, int pArg1)
{
  return cef_delete_file_ptr(pArg0, pArg1);
}

void *cef_dictionary_value_create(void)
{
  return cef_dictionary_value_create_ptr();
}

int cef_directory_exists(void *pArg0)
{
  return cef_directory_exists_ptr(pArg0);
}

void cef_display_get_alls(void *pArg0, void *pArg1)
{
  cef_display_get_alls_ptr(pArg0, pArg1);
}

size_t cef_display_get_count(void)
{
  return cef_display_get_count_ptr();
}

void *cef_display_get_matching_bounds(void *pArg0, int pArg1)
{
  return cef_display_get_matching_bounds_ptr(pArg0, pArg1);
}

void *cef_display_get_nearest_point(void *pArg0, int pArg1)
{
  return cef_display_get_nearest_point_ptr(pArg0, pArg1);
}

void *cef_display_get_primary(void)
{
  return cef_display_get_primary_ptr();
}

void cef_do_message_loop_work(void)
{
  cef_do_message_loop_work_ptr();
}

void *cef_drag_data_create(void)
{
  return cef_drag_data_create_ptr();
}

void cef_enable_highdpi_support(void)
{
  cef_enable_highdpi_support_ptr();
}

int cef_end_tracing(void *pArg0, void *pArg1)
{
  return cef_end_tracing_ptr(pArg0, pArg1);
}

void cef_execute_java_script_with_user_gesture_for_tests(void *pArg0, void *pArg1)
{
  cef_execute_java_script_with_user_gesture_for_tests_ptr(pArg0, pArg1);
}

int cef_execute_process(void *pArg0, void *pArg1, void *pArg2)
{
  return cef_execute_process_ptr(pArg0, pArg1, pArg2);
}

void *cef_format_url_for_security_display(void *pArg0)
{
  return cef_format_url_for_security_display_ptr(pArg0);
}

int cef_get_current_platform_thread_handle(void)
{
  return cef_get_current_platform_thread_handle_ptr();
}

int cef_get_current_platform_thread_id(void)
{
  return cef_get_current_platform_thread_id_ptr();
}

void cef_get_extensions_for_mime_type(void *pArg0, void *pArg1)
{
  cef_get_extensions_for_mime_type_ptr(pArg0, pArg1);
}

void *cef_get_mime_type(void *pArg0)
{
  return cef_get_mime_type_ptr(pArg0);
}

int cef_get_min_log_level(void)
{
  return cef_get_min_log_level_ptr();
}

int cef_get_path(int pArg0, void *pArg1)
{
  return cef_get_path_ptr(pArg0, pArg1);
}

int cef_get_temp_directory(void *pArg0)
{
  return cef_get_temp_directory_ptr(pArg0);
}

int cef_get_vlog_level(void *pArg0, size_t pArg1)
{
  return cef_get_vlog_level_ptr(pArg0, pArg1);
}

void *cef_image_create(void)
{
  return cef_image_create_ptr();
}

int cef_initialize(void *pArg0, void *pArg1, void *pArg2, void *pArg3)
{
  return cef_initialize_ptr(pArg0, pArg1, pArg2, pArg3);
}

int cef_is_cert_status_error(int pArg0)
{
  return cef_is_cert_status_error_ptr(pArg0);
}

int cef_is_cert_status_minor_error(int pArg0)
{
  return cef_is_cert_status_minor_error_ptr(pArg0);
}

void cef_is_web_plugin_unstable(void *pArg0, void *pArg1)
{
  cef_is_web_plugin_unstable_ptr(pArg0, pArg1);
}

void *cef_label_button_create(void *pArg0, void *pArg1, int pArg2)
{
  return cef_label_button_create_ptr(pArg0, pArg1, pArg2);
}

int cef_launch_process(void *pArg0)
{
  return cef_launch_process_ptr(pArg0);
}

void *cef_list_value_create(void)
{
  return cef_list_value_create_ptr();
}

void cef_load_crlsets_file(void *pArg0)
{
  cef_load_crlsets_file_ptr(pArg0);
}

void cef_log(void *pArg0, int pArg1, int pArg2, void *pArg3)
{
  cef_log_ptr(pArg0, pArg1, pArg2, pArg3);
}

void *cef_menu_button_create(void *pArg0, void *pArg1, int pArg2)
{
  return cef_menu_button_create_ptr(pArg0, pArg1, pArg2);
}

void *cef_menu_model_create(void *pArg0)
{
  return cef_menu_model_create_ptr(pArg0);
}

long long int cef_now_from_system_trace_time(void)
{
  return cef_now_from_system_trace_time_ptr();
}

void *cef_panel_create(void *pArg0)
{
  return cef_panel_create_ptr(pArg0);
}

void *cef_parse_json(void *pArg0, int pArg1)
{
  return cef_parse_json_ptr(pArg0, pArg1);
}

void *cef_parse_jsonand_return_error(void *pArg0, int pArg1, void *pArg2, void *pArg3)
{
  return cef_parse_jsonand_return_error_ptr(pArg0, pArg1, pArg2, pArg3);
}

int cef_parse_url(void *pArg0, void *pArg1)
{
  return cef_parse_url_ptr(pArg0, pArg1);
}

void *cef_post_data_create(void)
{
  return cef_post_data_create_ptr();
}

void *cef_post_data_element_create(void)
{
  return cef_post_data_element_create_ptr();
}

int cef_post_delayed_task(int pArg0, void *pArg1, long long int pArg2)
{
  return cef_post_delayed_task_ptr(pArg0, pArg1, pArg2);
}

int cef_post_task(int pArg0, void *pArg1)
{
  return cef_post_task_ptr(pArg0, pArg1);
}

void *cef_print_settings_create(void)
{
  return cef_print_settings_create_ptr();
}

void *cef_process_message_create(void *pArg0)
{
  return cef_process_message_create_ptr(pArg0);
}

void cef_quit_message_loop(void)
{
  cef_quit_message_loop_ptr();
}

void cef_refresh_web_plugins(void)
{
  cef_refresh_web_plugins_ptr();
}

int cef_register_extension(void *pArg0, void *pArg1, void *pArg2)
{
  return cef_register_extension_ptr(pArg0, pArg1, pArg2);
}

int cef_register_scheme_handler_factory(void *pArg0, void *pArg1, void *pArg2)
{
  return cef_register_scheme_handler_factory_ptr(pArg0, pArg1, pArg2);
}

void cef_register_web_plugin_crash(void *pArg0)
{
  cef_register_web_plugin_crash_ptr(pArg0);
}

void cef_register_widevine_cdm(void *pArg0, void *pArg1)
{
  cef_register_widevine_cdm_ptr(pArg0, pArg1);
}

int cef_remove_cross_origin_whitelist_entry(void *pArg0, void *pArg1, void *pArg2, int pArg3)
{
  return cef_remove_cross_origin_whitelist_entry_ptr(pArg0, pArg1, pArg2, pArg3);
}

void *cef_request_context_create_context(void *pArg0, void *pArg1)
{
  return cef_request_context_create_context_ptr(pArg0, pArg1);
}

void *cef_request_context_get_global_context(void)
{
  return cef_request_context_get_global_context_ptr();
}

void *cef_request_create(void)
{
  return cef_request_create_ptr();
}

void *cef_resource_bundle_get_global(void)
{
  return cef_resource_bundle_get_global_ptr();
}

void *cef_response_create(void)
{
  return cef_response_create_ptr();
}

void cef_run_message_loop(void)
{
  cef_run_message_loop_ptr();
}

void *cef_scroll_view_create(void *pArg0)
{
  return cef_scroll_view_create_ptr(pArg0);
}

void cef_server_create(void *pArg0, int pArg1, int pArg2, void *pArg3)
{
  cef_server_create_ptr(pArg0, pArg1, pArg2, pArg3);
}

void cef_set_crash_key_value(void *pArg0, void *pArg1)
{
  cef_set_crash_key_value_ptr(pArg0, pArg1);
}

void cef_set_osmodal_loop(int pArg0)
{
  cef_set_osmodal_loop_ptr(pArg0);
}

void cef_shutdown(void)
{
  cef_shutdown_ptr();
}

void *cef_stream_reader_create_for_data(void *pArg0, size_t pArg1)
{
  return cef_stream_reader_create_for_data_ptr(pArg0, pArg1);
}

void *cef_stream_reader_create_for_file(void *pArg0)
{
  return cef_stream_reader_create_for_file_ptr(pArg0);
}

void *cef_stream_reader_create_for_handler(void *pArg0)
{
  return cef_stream_reader_create_for_handler_ptr(pArg0);
}

void *cef_stream_writer_create_for_file(void *pArg0)
{
  return cef_stream_writer_create_for_file_ptr(pArg0);
}

void *cef_stream_writer_create_for_handler(void *pArg0)
{
  return cef_stream_writer_create_for_handler_ptr(pArg0);
}

int cef_string_ascii_to_utf16(void *pArg0, size_t pArg1, void *pArg2)
{
  return cef_string_ascii_to_utf16_ptr(pArg0, pArg1, pArg2);
}

int cef_string_ascii_to_wide(void *pArg0, size_t pArg1, void *pArg2)
{
  return cef_string_ascii_to_wide_ptr(pArg0, pArg1, pArg2);
}

void *cef_string_list_alloc(void)
{
  return cef_string_list_alloc_ptr();
}

void cef_string_list_append(void *pArg0, void *pArg1)
{
  cef_string_list_append_ptr(pArg0, pArg1);
}

void cef_string_list_clear(void *pArg0)
{
  cef_string_list_clear_ptr(pArg0);
}

void *cef_string_list_copy(void *pArg0)
{
  return cef_string_list_copy_ptr(pArg0);
}

void cef_string_list_free(void *pArg0)
{
  cef_string_list_free_ptr(pArg0);
}

size_t cef_string_list_size(void *pArg0)
{
  return cef_string_list_size_ptr(pArg0);
}

int cef_string_list_value(void *pArg0, size_t pArg1, void *pArg2)
{
  return cef_string_list_value_ptr(pArg0, pArg1, pArg2);
}

void *cef_string_map_alloc(void)
{
  return cef_string_map_alloc_ptr();
}

int cef_string_map_append(void *pArg0, void *pArg1, void *pArg2)
{
  return cef_string_map_append_ptr(pArg0, pArg1, pArg2);
}

void cef_string_map_clear(void *pArg0)
{
  cef_string_map_clear_ptr(pArg0);
}

int cef_string_map_find(void *pArg0, void *pArg1, void *pArg2)
{
  return cef_string_map_find_ptr(pArg0, pArg1, pArg2);
}

void cef_string_map_free(void *pArg0)
{
  cef_string_map_free_ptr(pArg0);
}

int cef_string_map_key(void *pArg0, size_t pArg1, void *pArg2)
{
  return cef_string_map_key_ptr(pArg0, pArg1, pArg2);
}

size_t cef_string_map_size(void *pArg0)
{
  return cef_string_map_size_ptr(pArg0);
}

int cef_string_map_value(void *pArg0, size_t pArg1, void *pArg2)
{
  return cef_string_map_value_ptr(pArg0, pArg1, pArg2);
}

void *cef_string_multimap_alloc(void)
{
  return cef_string_multimap_alloc_ptr();
}

int cef_string_multimap_append(void *pArg0, void *pArg1, void *pArg2)
{
  return cef_string_multimap_append_ptr(pArg0, pArg1, pArg2);
}

void cef_string_multimap_clear(void *pArg0)
{
  cef_string_multimap_clear_ptr(pArg0);
}

int cef_string_multimap_enumerate(void *pArg0, void *pArg1, size_t pArg2, void *pArg3)
{
  return cef_string_multimap_enumerate_ptr(pArg0, pArg1, pArg2, pArg3);
}

size_t cef_string_multimap_find_count(void *pArg0, void *pArg1)
{
  return cef_string_multimap_find_count_ptr(pArg0, pArg1);
}

void cef_string_multimap_free(void *pArg0)
{
  cef_string_multimap_free_ptr(pArg0);
}

int cef_string_multimap_key(void *pArg0, size_t pArg1, void *pArg2)
{
  return cef_string_multimap_key_ptr(pArg0, pArg1, pArg2);
}

size_t cef_string_multimap_size(void *pArg0)
{
  return cef_string_multimap_size_ptr(pArg0);
}

int cef_string_multimap_value(void *pArg0, size_t pArg1, void *pArg2)
{
  return cef_string_multimap_value_ptr(pArg0, pArg1, pArg2);
}

void *cef_string_userfree_utf16_alloc(void)
{
  return cef_string_userfree_utf16_alloc_ptr();
}

void cef_string_userfree_utf16_free(void *pArg0)
{
  cef_string_userfree_utf16_free_ptr(pArg0);
}

void *cef_string_userfree_utf8_alloc(void)
{
  return cef_string_userfree_utf8_alloc_ptr();
}

void cef_string_userfree_utf8_free(void *pArg0)
{
  cef_string_userfree_utf8_free_ptr(pArg0);
}

void *cef_string_userfree_wide_alloc(void)
{
  return cef_string_userfree_wide_alloc_ptr();
}

void cef_string_userfree_wide_free(void *pArg0)
{
  cef_string_userfree_wide_free_ptr(pArg0);
}

void cef_string_utf16_clear(void *pArg0)
{
  cef_string_utf16_clear_ptr(pArg0);
}

int cef_string_utf16_cmp(void *pArg0, void *pArg1)
{
  return cef_string_utf16_cmp_ptr(pArg0, pArg1);
}

int cef_string_utf16_set(void *pArg0, size_t pArg1, void *pArg2, int pArg3)
{
  return cef_string_utf16_set_ptr(pArg0, pArg1, pArg2, pArg3);
}

int cef_string_utf16_to_lower(void *pArg0, size_t pArg1, void *pArg2)
{
  return cef_string_utf16_to_lower_ptr(pArg0, pArg1, pArg2);
}

int cef_string_utf16_to_upper(void *pArg0, size_t pArg1, void *pArg2)
{
  return cef_string_utf16_to_upper_ptr(pArg0, pArg1, pArg2);
}

int cef_string_utf16_to_utf8(void *pArg0, size_t pArg1, void *pArg2)
{
  return cef_string_utf16_to_utf8_ptr(pArg0, pArg1, pArg2);
}

int cef_string_utf16_to_wide(void *pArg0, size_t pArg1, void *pArg2)
{
  return cef_string_utf16_to_wide_ptr(pArg0, pArg1, pArg2);
}

void cef_string_utf8_clear(void *pArg0)
{
  cef_string_utf8_clear_ptr(pArg0);
}

int cef_string_utf8_cmp(void *pArg0, void *pArg1)
{
  return cef_string_utf8_cmp_ptr(pArg0, pArg1);
}

int cef_string_utf8_set(void *pArg0, size_t pArg1, void *pArg2, int pArg3)
{
  return cef_string_utf8_set_ptr(pArg0, pArg1, pArg2, pArg3);
}

int cef_string_utf8_to_utf16(void *pArg0, size_t pArg1, void *pArg2)
{
  return cef_string_utf8_to_utf16_ptr(pArg0, pArg1, pArg2);
}

int cef_string_utf8_to_wide(void *pArg0, size_t pArg1, void *pArg2)
{
  return cef_string_utf8_to_wide_ptr(pArg0, pArg1, pArg2);
}

void cef_string_wide_clear(void *pArg0)
{
  cef_string_wide_clear_ptr(pArg0);
}

int cef_string_wide_cmp(void *pArg0, void *pArg1)
{
  return cef_string_wide_cmp_ptr(pArg0, pArg1);
}

int cef_string_wide_set(void *pArg0, size_t pArg1, void *pArg2, int pArg3)
{
  return cef_string_wide_set_ptr(pArg0, pArg1, pArg2, pArg3);
}

int cef_string_wide_to_utf16(void *pArg0, size_t pArg1, void *pArg2)
{
  return cef_string_wide_to_utf16_ptr(pArg0, pArg1, pArg2);
}

int cef_string_wide_to_utf8(void *pArg0, size_t pArg1, void *pArg2)
{
  return cef_string_wide_to_utf8_ptr(pArg0, pArg1, pArg2);
}

void *cef_task_runner_get_for_current_thread(void)
{
  return cef_task_runner_get_for_current_thread_ptr();
}

void *cef_task_runner_get_for_thread(int pArg0)
{
  return cef_task_runner_get_for_thread_ptr(pArg0);
}

void *cef_textfield_create(void *pArg0)
{
  return cef_textfield_create_ptr(pArg0);
}

void *cef_thread_create(void *pArg0, int pArg1, int pArg2, int pArg3, int pArg4)
{
  return cef_thread_create_ptr(pArg0, pArg1, pArg2, pArg3, pArg4);
}

int cef_time_delta(void *pArg0, void *pArg1, void *pArg2)
{
  return cef_time_delta_ptr(pArg0, pArg1, pArg2);
}

int cef_time_from_doublet(double pArg0, void *pArg1)
{
  return cef_time_from_doublet_ptr(pArg0, pArg1);
}

int cef_time_from_timet(long long int pArg0, void *pArg1)
{
  return cef_time_from_timet_ptr(pArg0, pArg1);
}

int cef_time_now(void *pArg0)
{
  return cef_time_now_ptr(pArg0);
}

int cef_time_to_doublet(void *pArg0, void *pArg1)
{
  return cef_time_to_doublet_ptr(pArg0, pArg1);
}

int cef_time_to_timet(void *pArg0, void *pArg1)
{
  return cef_time_to_timet_ptr(pArg0, pArg1);
}

void cef_trace_counter(void *pArg0, void *pArg1, void *pArg2, long long int pArg3, void *pArg4, long long int pArg5, int pArg6)
{
  cef_trace_counter_ptr(pArg0, pArg1, pArg2, pArg3, pArg4, pArg5, pArg6);
}

void cef_trace_counter_id(void *pArg0, void *pArg1, long long int pArg2, void *pArg3, long long int pArg4, void *pArg5, long long int pArg6, int pArg7)
{
  cef_trace_counter_id_ptr(pArg0, pArg1, pArg2, pArg3, pArg4, pArg5, pArg6, pArg7);
}

void cef_trace_event_async_begin(void *pArg0, void *pArg1, long long int pArg2, void *pArg3, long long int pArg4, void *pArg5, long long int pArg6, int pArg7)
{
  cef_trace_event_async_begin_ptr(pArg0, pArg1, pArg2, pArg3, pArg4, pArg5, pArg6, pArg7);
}

void cef_trace_event_async_end(void *pArg0, void *pArg1, long long int pArg2, void *pArg3, long long int pArg4, void *pArg5, long long int pArg6, int pArg7)
{
  cef_trace_event_async_end_ptr(pArg0, pArg1, pArg2, pArg3, pArg4, pArg5, pArg6, pArg7);
}

void cef_trace_event_async_step_into(void *pArg0, void *pArg1, long long int pArg2, long long int pArg3, void *pArg4, long long int pArg5, int pArg6)
{
  cef_trace_event_async_step_into_ptr(pArg0, pArg1, pArg2, pArg3, pArg4, pArg5, pArg6);
}

void cef_trace_event_async_step_past(void *pArg0, void *pArg1, long long int pArg2, long long int pArg3, void *pArg4, long long int pArg5, int pArg6)
{
  cef_trace_event_async_step_past_ptr(pArg0, pArg1, pArg2, pArg3, pArg4, pArg5, pArg6);
}

void cef_trace_event_begin(void *pArg0, void *pArg1, void *pArg2, long long int pArg3, void *pArg4, long long int pArg5, int pArg6)
{
  cef_trace_event_begin_ptr(pArg0, pArg1, pArg2, pArg3, pArg4, pArg5, pArg6);
}

void cef_trace_event_end(void *pArg0, void *pArg1, void *pArg2, long long int pArg3, void *pArg4, long long int pArg5, int pArg6)
{
  cef_trace_event_end_ptr(pArg0, pArg1, pArg2, pArg3, pArg4, pArg5, pArg6);
}

void cef_trace_event_instant(void *pArg0, void *pArg1, void *pArg2, long long int pArg3, void *pArg4, long long int pArg5, int pArg6)
{
  cef_trace_event_instant_ptr(pArg0, pArg1, pArg2, pArg3, pArg4, pArg5, pArg6);
}

void *cef_translator_test_create(void)
{
  return cef_translator_test_create_ptr();
}

void *cef_translator_test_ref_ptr_library_child_child_create(int pArg0, int pArg1, int pArg2)
{
  return cef_translator_test_ref_ptr_library_child_child_create_ptr(pArg0, pArg1, pArg2);
}

void *cef_translator_test_ref_ptr_library_child_create(int pArg0, int pArg1)
{
  return cef_translator_test_ref_ptr_library_child_create_ptr(pArg0, pArg1);
}

void *cef_translator_test_ref_ptr_library_create(int pArg0)
{
  return cef_translator_test_ref_ptr_library_create_ptr(pArg0);
}

void *cef_translator_test_scoped_library_child_child_create(int pArg0, int pArg1, int pArg2)
{
  return cef_translator_test_scoped_library_child_child_create_ptr(pArg0, pArg1, pArg2);
}

void *cef_translator_test_scoped_library_child_create(int pArg0, int pArg1)
{
  return cef_translator_test_scoped_library_child_create_ptr(pArg0, pArg1);
}

void *cef_translator_test_scoped_library_create(int pArg0)
{
  return cef_translator_test_scoped_library_create_ptr(pArg0);
}

void cef_unregister_internal_web_plugin(void *pArg0)
{
  cef_unregister_internal_web_plugin_ptr(pArg0);
}

void *cef_uridecode(void *pArg0, int pArg1, int pArg2)
{
  return cef_uridecode_ptr(pArg0, pArg1, pArg2);
}

void *cef_uriencode(void *pArg0, int pArg1)
{
  return cef_uriencode_ptr(pArg0, pArg1);
}

void *cef_urlrequest_create(void *pArg0, void *pArg1, void *pArg2)
{
  return cef_urlrequest_create_ptr(pArg0, pArg1, pArg2);
}

void *cef_v8context_get_current_context(void)
{
  return cef_v8context_get_current_context_ptr();
}

void *cef_v8context_get_entered_context(void)
{
  return cef_v8context_get_entered_context_ptr();
}

int cef_v8context_in_context(void)
{
  return cef_v8context_in_context_ptr();
}

void *cef_v8stack_trace_get_current(int pArg0)
{
  return cef_v8stack_trace_get_current_ptr(pArg0);
}

void *cef_v8value_create_array(int pArg0)
{
  return cef_v8value_create_array_ptr(pArg0);
}

void *cef_v8value_create_array_buffer(void *pArg0, size_t pArg1, void *pArg2)
{
  return cef_v8value_create_array_buffer_ptr(pArg0, pArg1, pArg2);
}

void *cef_v8value_create_bool(int pArg0)
{
  return cef_v8value_create_bool_ptr(pArg0);
}

void *cef_v8value_create_date(void *pArg0)
{
  return cef_v8value_create_date_ptr(pArg0);
}

void *cef_v8value_create_double(double pArg0)
{
  return cef_v8value_create_double_ptr(pArg0);
}

void *cef_v8value_create_function(void *pArg0, void *pArg1)
{
  return cef_v8value_create_function_ptr(pArg0, pArg1);
}

void *cef_v8value_create_int(int pArg0)
{
  return cef_v8value_create_int_ptr(pArg0);
}

void *cef_v8value_create_null(void)
{
  return cef_v8value_create_null_ptr();
}

void *cef_v8value_create_object(void *pArg0, void *pArg1)
{
  return cef_v8value_create_object_ptr(pArg0, pArg1);
}

void *cef_v8value_create_string(void *pArg0)
{
  return cef_v8value_create_string_ptr(pArg0);
}

void *cef_v8value_create_uint(int pArg0)
{
  return cef_v8value_create_uint_ptr(pArg0);
}

void *cef_v8value_create_undefined(void)
{
  return cef_v8value_create_undefined_ptr();
}

void *cef_value_create(void)
{
  return cef_value_create_ptr();
}

int cef_version_info(int pArg0)
{
  return cef_version_info_ptr(pArg0);
}

void cef_visit_web_plugin_info(void *pArg0)
{
  cef_visit_web_plugin_info_ptr(pArg0);
}

void *cef_waitable_event_create(int pArg0, int pArg1)
{
  return cef_waitable_event_create_ptr(pArg0, pArg1);
}

void *cef_window_create_top_level(void *pArg0)
{
  return cef_window_create_top_level_ptr(pArg0);
}

void *cef_write_json(void *pArg0, int pArg1)
{
  return cef_write_json_ptr(pArg0, pArg1);
}

void *cef_xml_reader_create(void *pArg0, int pArg1, void *pArg2)
{
  return cef_xml_reader_create_ptr(pArg0, pArg1, pArg2);
}

int cef_zip_directory(void *pArg0, void *pArg1, int pArg2)
{
  return cef_zip_directory_ptr(pArg0, pArg1, pArg2);
}

void *cef_zip_reader_create(void *pArg0)
{
  return cef_zip_reader_create_ptr(pArg0);
}

}
