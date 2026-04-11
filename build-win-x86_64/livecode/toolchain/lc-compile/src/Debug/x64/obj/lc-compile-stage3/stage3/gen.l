%{
#include "gen.h"

extern YYSTYPE yylval;
#include <position.h>
#define yysetpos() { GetCurrentPosition(&yylval.attr[0]); AdvanceCurrentPosition(yyleng); }
#include "literal.h"
#include "report.h"
%}
%s SPECIAL
%x COMMENT
%%
"assign_array" { yysetpos(); return yytk_a_BLANK_s_BLANK_s_BLANK_i_BLANK_g_BLANK_n_BLANK_UNDERSCORE_a_BLANK_r_BLANK_r_BLANK_a_BLANK_y_BLANK; }
"assign_list" { yysetpos(); return yytk_a_BLANK_s_BLANK_s_BLANK_i_BLANK_g_BLANK_n_BLANK_UNDERSCORE_l_BLANK_i_BLANK_s_BLANK_t_BLANK; }
"store" { yysetpos(); return yykw_store; }
"fetch" { yysetpos(); return yykw_fetch; }
"invoke_indirect" { yysetpos(); return yytk_i_BLANK_n_BLANK_v_BLANK_o_BLANK_k_BLANK_e_BLANK_UNDERSCORE_i_BLANK_n_BLANK_d_BLANK_i_BLANK_r_BLANK_e_BLANK_c_BLANK_t_BLANK; }
"invoke" { yysetpos(); return yykw_invoke; }
"assign" { yysetpos(); return yykw_assign; }
"assign_constant" { yysetpos(); return yytk_a_BLANK_s_BLANK_s_BLANK_i_BLANK_g_BLANK_n_BLANK_UNDERSCORE_c_BLANK_o_BLANK_n_BLANK_s_BLANK_t_BLANK_a_BLANK_n_BLANK_t_BLANK; }
"jump_if_true" { yysetpos(); return yytk_j_BLANK_u_BLANK_m_BLANK_p_BLANK_UNDERSCORE_i_BLANK_f_BLANK_UNDERSCORE_t_BLANK_r_BLANK_u_BLANK_e_BLANK; }
"jump_if_false" { yysetpos(); return yytk_j_BLANK_u_BLANK_m_BLANK_p_BLANK_UNDERSCORE_i_BLANK_f_BLANK_UNDERSCORE_f_BLANK_a_BLANK_l_BLANK_s_BLANK_e_BLANK; }
"jump" { yysetpos(); return yykw_jump; }
"x" { yysetpos(); return yykw_x; }
"y" { yysetpos(); return yykw_y; }
"point" { yysetpos(); return yykw_point; }
"red" { yysetpos(); return yykw_red; }
"green" { yysetpos(); return yykw_green; }
"blue" { yysetpos(); return yykw_blue; }
"alpha" { yysetpos(); return yykw_alpha; }
"identity" { yysetpos(); return yykw_identity; }
"rotation" { yysetpos(); return yykw_rotation; }
"translation" { yysetpos(); return yykw_translation; }
"matrix" { yysetpos(); return yykw_matrix; }
"inverse" { yysetpos(); return yykw_inverse; }
"concat" { yysetpos(); return yykw_concat; }
"skew" { yysetpos(); return yykw_skew; }
"rotate" { yysetpos(); return yykw_rotate; }
"translate" { yysetpos(); return yykw_translate; }
"*" { yysetpos(); return yytk_ASTERISK; }
"solid" { yysetpos(); return yykw_solid; }
"transformed" { yysetpos(); return yykw_transformed; }
"scaled" { yysetpos(); return yykw_scaled; }
"translated" { yysetpos(); return yykw_translated; }
"pattern" { yysetpos(); return yykw_pattern; }
"transform" { yysetpos(); return yykw_transform; }
"sqrtxy" { yysetpos(); return yykw_sqrtxy; }
"xy" { yysetpos(); return yykw_xy; }
"spiral" { yysetpos(); return yykw_spiral; }
"diamond" { yysetpos(); return yykw_diamond; }
"conical" { yysetpos(); return yykw_conical; }
"radial" { yysetpos(); return yykw_radial; }
"linear" { yysetpos(); return yykw_linear; }
"stop" { yysetpos(); return yykw_stop; }
"gradient" { yysetpos(); return yykw_gradient; }
"ramp" { yysetpos(); return yykw_ramp; }
"mirror" { yysetpos(); return yykw_mirror; }
"via" { yysetpos(); return yykw_via; }
"add" { yysetpos(); return yykw_add; }
"resource" { yysetpos(); return yykw_resource; }
"density" { yysetpos(); return yykw_density; }
"pixels" { yysetpos(); return yykw_pixels; }
"circle" { yysetpos(); return yykw_circle; }
"ellipse" { yysetpos(); return yykw_ellipse; }
"points" { yysetpos(); return yykw_points; }
"polyline" { yysetpos(); return yykw_polyline; }
"polygon" { yysetpos(); return yykw_polygon; }
"sector" { yysetpos(); return yykw_sector; }
"centered" { yysetpos(); return yykw_centered; }
"segment" { yysetpos(); return yykw_segment; }
"subpath" { yysetpos(); return yykw_subpath; }
"box" { yysetpos(); return yykw_box; }
"bounding" { yysetpos(); return yykw_bounding; }
"instructions" { yysetpos(); return yykw_instructions; }
"move" { yysetpos(); return yykw_move; }
"curve" { yysetpos(); return yykw_curve; }
"radius" { yysetpos(); return yykw_radius; }
"through" { yysetpos(); return yykw_through; }
"route" { yysetpos(); return yykw_route; }
"taking" { yysetpos(); return yykw_taking; }
"anticlockwise" { yysetpos(); return yykw_anticlockwise; }
"clockwise" { yysetpos(); return yykw_clockwise; }
"smallest" { yysetpos(); return yykw_smallest; }
"largest" { yysetpos(); return yykw_largest; }
"rotated" { yysetpos(); return yykw_rotated; }
"radii" { yysetpos(); return yykw_radii; }
"arc" { yysetpos(); return yykw_arc; }
"path" { yysetpos(); return yykw_path; }
"glow" { yysetpos(); return yykw_glow; }
"outer" { yysetpos(); return yykw_outer; }
"inner" { yysetpos(); return yykw_inner; }
"overlay" { yysetpos(); return yykw_overlay; }
"color" { yysetpos(); return yykw_color; }
"blend" { yysetpos(); return yykw_blend; }
"spread" { yysetpos(); return yykw_spread; }
"distance" { yysetpos(); return yykw_distance; }
"angle" { yysetpos(); return yykw_angle; }
"knockout" { yysetpos(); return yykw_knockout; }
"source" { yysetpos(); return yykw_source; }
"bold" { yysetpos(); return yykw_bold; }
"italic" { yysetpos(); return yykw_italic; }
"layout" { yysetpos(); return yykw_layout; }
"bottom right"/[^a-zA-Z] { yysetpos(); return yytk_b_BLANK_o_BLANK_t_BLANK_t_BLANK_o_BLANK_m_BLANK_BLANK_r_BLANK_i_BLANK_g_BLANK_h_BLANK_t_BLANK; }
"bottom left"/[^a-zA-Z] { yysetpos(); return yytk_b_BLANK_o_BLANK_t_BLANK_t_BLANK_o_BLANK_m_BLANK_BLANK_l_BLANK_e_BLANK_f_BLANK_t_BLANK; }
"center" { yysetpos(); return yykw_center; }
"top right"/[^a-zA-Z] { yysetpos(); return yytk_t_BLANK_o_BLANK_p_BLANK_BLANK_r_BLANK_i_BLANK_g_BLANK_h_BLANK_t_BLANK; }
"top left"/[^a-zA-Z] { yysetpos(); return yytk_t_BLANK_o_BLANK_p_BLANK_BLANK_l_BLANK_e_BLANK_f_BLANK_t_BLANK; }
"rule" { yysetpos(); return yykw_rule; }
"antialias" { yysetpos(); return yykw_antialias; }
"opacity" { yysetpos(); return yykw_opacity; }
"stippled" { yysetpos(); return yykw_stippled; }
"quality" { yysetpos(); return yykw_quality; }
"resize" { yysetpos(); return yykw_resize; }
"image" { yysetpos(); return yykw_image; }
"join" { yysetpos(); return yykw_join; }
"style" { yysetpos(); return yykw_style; }
"cap" { yysetpos(); return yykw_cap; }
"limit" { yysetpos(); return yykw_limit; }
"miter" { yysetpos(); return yykw_miter; }
"dashes" { yysetpos(); return yykw_dashes; }
"phase" { yysetpos(); return yykw_phase; }
"dash" { yysetpos(); return yykw_dash; }
"clipping" { yysetpos(); return yykw_clipping; }
"save" { yysetpos(); return yykw_save; }
"state" { yysetpos(); return yykw_state; }
"restore" { yysetpos(); return yykw_restore; }
"only" { yysetpos(); return yykw_only; }
"effect" { yysetpos(); return yykw_effect; }
"stroke" { yysetpos(); return yykw_stroke; }
"clip" { yysetpos(); return yykw_clip; }
"draw" { yysetpos(); return yykw_draw; }
"fill" { yysetpos(); return yykw_fill; }
"measure" { yysetpos(); return yykw_measure; }
"size" { yysetpos(); return yykw_size; }
"canvas" { yysetpos(); return yykw_canvas; }
"exists" { yysetpos(); return yykw_exists; }
"exist" { yysetpos(); return yykw_exist; }
"does" { yysetpos(); return yykw_does; }
"owner" { yysetpos(); return yykw_owner; }
"send" { yysetpos(); return yykw_send; }
"post" { yysetpos(); return yykw_post; }
"handled" { yysetpos(); return yykw_handled; }
"was" { yysetpos(); return yykw_was; }
"caller" { yysetpos(); return yykw_caller; }
"execute" { yysetpos(); return yykw_execute; }
"column" { yysetpos(); return yykw_column; }
"row" { yysetpos(); return yykw_row; }
"line" { yysetpos(); return yykw_line; }
"delimiter" { yysetpos(); return yykw_delimiter; }
"item" { yysetpos(); return yykw_item; }
"folder" { yysetpos(); return yykw_folder; }
"resources" { yysetpos(); return yykw_resources; }
"lock" { yysetpos(); return yykw_lock; }
"caps" { yysetpos(); return yykw_caps; }
"option" { yysetpos(); return yykw_option; }
"alt" { yysetpos(); return yykw_alt; }
"control" { yysetpos(); return yykw_control; }
"shift" { yysetpos(); return yykw_shift; }
"resolve" { yysetpos(); return yykw_resolve; }
"relative" { yysetpos(); return yykw_relative; }
"redraw" { yysetpos(); return yykw_redraw; }
"seconds" { yysetpos(); return yykw_seconds; }
"schedule" { yysetpos(); return yykw_schedule; }
"timer" { yysetpos(); return yykw_timer; }
"cancel" { yysetpos(); return yykw_cancel; }
"mode" { yysetpos(); return yykw_mode; }
"edit" { yysetpos(); return yykw_edit; }
"all" { yysetpos(); return yykw_all; }
"trigger" { yysetpos(); return yykw_trigger; }
"object" { yysetpos(); return yykw_object; }
"script" { yysetpos(); return yykw_script; }
"bounds" { yysetpos(); return yykw_bounds; }
"width" { yysetpos(); return yykw_width; }
"height" { yysetpos(); return yykw_height; }
"font" { yysetpos(); return yykw_font; }
"paint" { yysetpos(); return yykw_paint; }
"focus" { yysetpos(); return yykw_focus; }
"shadow" { yysetpos(); return yykw_shadow; }
"border" { yysetpos(); return yykw_border; }
"highlight" { yysetpos(); return yykw_highlight; }
"background" { yysetpos(); return yykw_background; }
"foreground" { yysetpos(); return yykw_foreground; }
"scale" { yysetpos(); return yykw_scale; }
"pixel" { yysetpos(); return yykw_pixel; }
"mouse" { yysetpos(); return yykw_mouse; }
"button" { yysetpos(); return yykw_button; }
"count" { yysetpos(); return yykw_count; }
"click" { yysetpos(); return yykw_click; }
"current" { yysetpos(); return yykw_current; }
"id" { yysetpos(); return yykw_id; }
"touches" { yysetpos(); return yykw_touches; }
"position" { yysetpos(); return yykw_position; }
"ids" { yysetpos(); return yykw_ids; }
"touch" { yysetpos(); return yykw_touch; }
"within" { yysetpos(); return yykw_within; }
"menu" { yysetpos(); return yykw_menu; }
"properties" { yysetpos(); return yykw_properties; }
"popped" { yysetpos(); return yykw_popped; }
"currently" { yysetpos(); return yykw_currently; }
"popup" { yysetpos(); return yykw_popup; }
"close" { yysetpos(); return yykw_close; }
"returning" { yysetpos(); return yykw_returning; }
"target" { yysetpos(); return yykw_target; }
"this" { yysetpos(); return yykw_this; }
"children" { yysetpos(); return yykw_children; }
"new" { yysetpos(); return yykw_new; }
"at" { yysetpos(); return yykw_at; }
"top" { yysetpos(); return yykw_top; }
"bottom" { yysetpos(); return yykw_bottom; }
"place" { yysetpos(); return yykw_place; }
"above" { yysetpos(); return yykw_above; }
"below" { yysetpos(); return yykw_below; }
"unplace" { yysetpos(); return yykw_unplace; }
"rectangle" { yysetpos(); return yykw_rectangle; }
"location" { yysetpos(); return yykw_location; }
"enabled" { yysetpos(); return yykw_enabled; }
"disabled" { yysetpos(); return yykw_disabled; }
"annotation" { yysetpos(); return yykw_annotation; }
"layer" { yysetpos(); return yykw_layer; }
"native" { yysetpos(); return yykw_native; }
"my" { yysetpos(); return yykw_my; }
"license" { yysetpos(); return yykw_license; }
"ensure" { yysetpos(); return yykw_ensure; }
"extension" { yysetpos(); return yykw_extension; }
"feature" { yysetpos(); return yykw_feature; }
"edition" { yysetpos(); return yykw_edition; }
"licensed" { yysetpos(); return yykw_licensed; }
"subtract" { yysetpos(); return yykw_subtract; }
"multiply" { yysetpos(); return yykw_multiply; }
"divide" { yysetpos(); return yykw_divide; }
"/" { yysetpos(); return yytk_SLASH; }
"mod" { yysetpos(); return yykw_mod; }
"wrap" { yysetpos(); return yykw_wrap; }
">=" { yysetpos(); return yytk_GREATER_EQUAL; }
"<=" { yysetpos(); return yytk_LESS_EQUAL; }
"formatted" { yysetpos(); return yykw_formatted; }
"format" { yysetpos(); return yykw_format; }
"keys" { yysetpos(); return yykw_keys; }
"elements" { yysetpos(); return yykw_elements; }
"among" { yysetpos(); return yykw_among; }
"key" { yysetpos(); return yykw_key; }
"expect" { yysetpos(); return yykw_expect; }
"that" { yysetpos(); return yykw_that; }
"&" { yysetpos(); return yytk_AMPERSAND; }
"bitwise" { yysetpos(); return yykw_bitwise; }
"shifted" { yysetpos(); return yykw_shifted; }
"index" { yysetpos(); return yykw_index; }
"contains" { yysetpos(); return yykw_contains; }
"begins" { yysetpos(); return yykw_begins; }
"ends" { yysetpos(); return yykw_ends; }
"bytes" { yysetpos(); return yykw_bytes; }
"random" { yysetpos(); return yykw_random; }
"reverse" { yysetpos(); return yykw_reverse; }
"chars" { yysetpos(); return yykw_chars; }
"newline" { yysetpos(); return yykw_newline; }
"char" { yysetpos(); return yykw_char; }
"codeunits" { yysetpos(); return yykw_codeunits; }
"offset" { yysetpos(); return yykw_offset; }
"codeunit" { yysetpos(); return yykw_codeunit; }
"local" { yysetpos(); return yykw_local; }
"date" { yysetpos(); return yykw_date; }
"time" { yysetpos(); return yykw_time; }
"universal" { yysetpos(); return yykw_universal; }
"contents" { yysetpos(); return yykw_contents; }
"file" { yysetpos(); return yykw_file; }
"create" { yysetpos(); return yykw_create; }
"directory" { yysetpos(); return yykw_directory; }
"entries" { yysetpos(); return yykw_entries; }
"head" { yysetpos(); return yykw_head; }
"tail" { yysetpos(); return yykw_tail; }
"onto" { yysetpos(); return yykw_onto; }
"push" { yysetpos(); return yykw_push; }
"pop" { yysetpos(); return yykw_pop; }
"back" { yysetpos(); return yykw_back; }
"front" { yysetpos(); return yykw_front; }
"first" { yysetpos(); return yykw_first; }
"last" { yysetpos(); return yykw_last; }
"delete" { yysetpos(); return yykw_delete; }
"before" { yysetpos(); return yykw_before; }
"element" { yysetpos(); return yykw_element; }
"after" { yysetpos(); return yykw_after; }
"splice" { yysetpos(); return yykw_splice; }
"not" { yysetpos(); return yykw_not; }
"parsed" { yysetpos(); return yykw_parsed; }
"parse" { yysetpos(); return yykw_parse; }
"^" { yysetpos(); return yytk_POWER; }
"sine" { yysetpos(); return yykw_sine; }
"cosine" { yysetpos(); return yykw_cosine; }
"tangent" { yysetpos(); return yykw_tangent; }
"arcsine" { yysetpos(); return yykw_arcsine; }
"arccosine" { yysetpos(); return yykw_arccosine; }
"arctangent" { yysetpos(); return yykw_arctangent; }
"log" { yysetpos(); return yykw_log; }
"natural" { yysetpos(); return yykw_natural; }
"exponential" { yysetpos(); return yykw_exponential; }
"trunc" { yysetpos(); return yykw_trunc; }
"abs" { yysetpos(); return yykw_abs; }
"minimum" { yysetpos(); return yykw_minimum; }
"value" { yysetpos(); return yykw_value; }
"maximum" { yysetpos(); return yykw_maximum; }
"root" { yysetpos(); return yykw_root; }
"square" { yysetpos(); return yykw_square; }
"base" { yysetpos(); return yykw_base; }
"converted" { yysetpos(); return yykw_converted; }
"pi" { yysetpos(); return yykw_pi; }
"round" { yysetpos(); return yykw_round; }
"rounded" { yysetpos(); return yykw_rounded; }
"floor" { yysetpos(); return yykw_floor; }
"ceiling" { yysetpos(); return yykw_ceiling; }
"text" { yysetpos(); return yykw_text; }
"byte" { yysetpos(); return yykw_byte; }
"numeric" { yysetpos(); return yykw_numeric; }
"ascending" { yysetpos(); return yykw_ascending; }
"order" { yysetpos(); return yykw_order; }
"chronological" { yysetpos(); return yykw_chronological; }
"descending" { yysetpos(); return yykw_descending; }
"using" { yysetpos(); return yykw_using; }
"sort" { yysetpos(); return yykw_sort; }
"stream" { yysetpos(); return yykw_stream; }
"write" { yysetpos(); return yykw_write; }
"replace" { yysetpos(); return yykw_replace; }
"&&" { yysetpos(); return yytk_AMPERSAND_AMPERSAND; }
"upper" { yysetpos(); return yykw_upper; }
"lower" { yysetpos(); return yykw_lower; }
"operating" { yysetpos(); return yykw_operating; }
"architecture" { yysetpos(); return yykw_architecture; }
"quit" { yysetpos(); return yykw_quit; }
"status" { yysetpos(); return yykw_status; }
"name" { yysetpos(); return yykw_name; }
"arguments" { yysetpos(); return yykw_arguments; }
"command" { yysetpos(); return yykw_command; }
"reset" { yysetpos(); return yykw_reset; }
"code" { yysetpos(); return yykw_code; }
"error" { yysetpos(); return yykw_error; }
"system" { yysetpos(); return yykw_system; }
"empty" { yysetpos(); return yykw_empty; }
"is not"/[^a-zA-Z] { yysetpos(); return yytk_i_BLANK_s_BLANK_BLANK_n_BLANK_o_BLANK_t_BLANK; }
"boolean" { yysetpos(); return yykw_boolean; }
"number" { yysetpos(); return yykw_number; }
"string" { yysetpos(); return yykw_string; }
"data" { yysetpos(); return yykw_data; }
"array" { yysetpos(); return yykw_array; }
"an" { yysetpos(); return yykw_an; }
"list" { yysetpos(); return yykw_list; }
"a" { yysetpos(); return yykw_a; }
"split" { yysetpos(); return yykw_split; }
"combine" { yysetpos(); return yykw_combine; }
"tests" { yysetpos(); return yykw_tests; }
"plan" { yysetpos(); return yykw_plan; }
"diagnostic" { yysetpos(); return yykw_diagnostic; }
"skip" { yysetpos(); return yykw_skip; }
"because" { yysetpos(); return yykw_because; }
"when" { yysetpos(); return yykw_when; }
"test" { yysetpos(); return yykw_test; }
"broken" { yysetpos(); return yykw_broken; }
"input" { yysetpos(); return yykw_input; }
"output" { yysetpos(); return yykw_output; }
"+" { yysetpos(); return yytk_PLUS; }
"-" { yysetpos(); return yytk_MINUS; }
"=" { yysetpos(); return yytk_EQUAL; }
">" { yysetpos(); return yytk_GREATER; }
"<" { yysetpos(); return yytk_LESS; }
"!" { yysetpos(); return yytk_EXCLAM; }
"|" { yysetpos(); return yytk_BAR; }
"false" { yysetpos(); return yykw_false; }
"true" { yysetpos(); return yykw_true; }
"}" { yysetpos(); return yytk_RBRACE; }
"{" { yysetpos(); return yytk_LBRACE; }
"]" { yysetpos(); return yytk_RBRACKET; }
"[" { yysetpos(); return yytk_LBRACKET; }
"result" { yysetpos(); return yykw_result; }
"the" { yysetpos(); return yykw_the; }
"and" { yysetpos(); return yykw_and; }
"or" { yysetpos(); return yykw_or; }
"register" { yysetpos(); return yykw_register; }
":" { yysetpos(); return yytk_COLON; }
"by" { yysetpos(); return yykw_by; }
"else" { yysetpos(); return yykw_else; }
"bytecode" { yysetpos(); return yykw_bytecode; }
"into" { yysetpos(); return yykw_into; }
"put" { yysetpos(); return yykw_put; }
"return" { yysetpos(); return yykw_return; }
"exit" { yysetpos(); return yykw_exit; }
"next" { yysetpos(); return yykw_next; }
"throw" { yysetpos(); return yykw_throw; }
"each" { yysetpos(); return yykw_each; }
"for" { yysetpos(); return yykw_for; }
"down" { yysetpos(); return yykw_down; }
"up" { yysetpos(); return yykw_up; }
"from" { yysetpos(); return yykw_from; }
"until" { yysetpos(); return yykw_until; }
"while" { yysetpos(); return yykw_while; }
"times" { yysetpos(); return yykw_times; }
"forever" { yysetpos(); return yykw_forever; }
"repeat" { yysetpos(); return yykw_repeat; }
"then" { yysetpos(); return yykw_then; }
"if" { yysetpos(); return yykw_if; }
"of" { yysetpos(); return yykw_of; }
"nothing" { yysetpos(); return yykw_nothing; }
"List" { yysetpos(); return yykw_List; }
"Array" { yysetpos(); return yykw_Array; }
"Data" { yysetpos(); return yykw_Data; }
"String" { yysetpos(); return yykw_String; }
"Number" { yysetpos(); return yykw_Number; }
"Real" { yysetpos(); return yykw_Real; }
"Integer" { yysetpos(); return yykw_Integer; }
"Boolean" { yysetpos(); return yykw_Boolean; }
"any" { yysetpos(); return yykw_any; }
"optional" { yysetpos(); return yykw_optional; }
"sequence" { yysetpos(); return yykw_sequence; }
"logical or"/[^a-zA-Z] { yysetpos(); return yytk_l_BLANK_o_BLANK_g_BLANK_i_BLANK_c_BLANK_a_BLANK_l_BLANK_BLANK_o_BLANK_r_BLANK; }
"logical and"/[^a-zA-Z] { yysetpos(); return yytk_l_BLANK_o_BLANK_g_BLANK_i_BLANK_c_BLANK_a_BLANK_l_BLANK_BLANK_a_BLANK_n_BLANK_d_BLANK; }
"logical not"/[^a-zA-Z] { yysetpos(); return yytk_l_BLANK_o_BLANK_g_BLANK_i_BLANK_c_BLANK_a_BLANK_l_BLANK_BLANK_n_BLANK_o_BLANK_t_BLANK; }
"bitwise or"/[^a-zA-Z] { yysetpos(); return yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_o_BLANK_r_BLANK; }
"bitwise xor"/[^a-zA-Z] { yysetpos(); return yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_x_BLANK_o_BLANK_r_BLANK; }
"bitwise and"/[^a-zA-Z] { yysetpos(); return yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_a_BLANK_n_BLANK_d_BLANK; }
"classification" { yysetpos(); return yykw_classification; }
"comparison" { yysetpos(); return yykw_comparison; }
"concatenation" { yysetpos(); return yykw_concatenation; }
"bitwise shift"/[^a-zA-Z] { yysetpos(); return yytk_b_BLANK_i_BLANK_t_BLANK_w_BLANK_i_BLANK_s_BLANK_e_BLANK_BLANK_s_BLANK_h_BLANK_i_BLANK_f_BLANK_t_BLANK; }
"addition" { yysetpos(); return yykw_addition; }
"multiplication" { yysetpos(); return yykw_multiplication; }
"modifier" { yysetpos(); return yykw_modifier; }
"exponentiation" { yysetpos(); return yykw_exponentiation; }
"conversion" { yysetpos(); return yykw_conversion; }
"constructor" { yysetpos(); return yykw_constructor; }
"function chunk"/[^a-zA-Z] { yysetpos(); return yytk_f_BLANK_u_BLANK_n_BLANK_c_BLANK_t_BLANK_i_BLANK_o_BLANK_n_BLANK_BLANK_c_BLANK_h_BLANK_u_BLANK_n_BLANK_k_BLANK; }
"subscript chunk"/[^a-zA-Z] { yysetpos(); return yytk_s_BLANK_u_BLANK_b_BLANK_s_BLANK_c_BLANK_r_BLANK_i_BLANK_p_BLANK_t_BLANK_BLANK_c_BLANK_h_BLANK_u_BLANK_n_BLANK_k_BLANK; }
"subscript" { yysetpos(); return yykw_subscript; }
"call" { yysetpos(); return yykw_call; }
"function" { yysetpos(); return yykw_function; }
"resolution" { yysetpos(); return yykw_resolution; }
"scope" { yysetpos(); return yykw_scope; }
"right" { yysetpos(); return yykw_right; }
"left" { yysetpos(); return yykw_left; }
"neutral" { yysetpos(); return yykw_neutral; }
"phrase" { yysetpos(); return yykw_phrase; }
"binary" { yysetpos(); return yykw_binary; }
"postfix" { yysetpos(); return yykw_postfix; }
"precedence" { yysetpos(); return yykw_precedence; }
"operator" { yysetpos(); return yykw_operator; }
"prefix" { yysetpos(); return yykw_prefix; }
"iterator" { yysetpos(); return yykw_iterator; }
"expression" { yysetpos(); return yykw_expression; }
"statement" { yysetpos(); return yykw_statement; }
"message" { yysetpos(); return yykw_message; }
"with" { yysetpos(); return yykw_with; }
"deprecate" { yysetpos(); return yykw_deprecate; }
"begin" { yysetpos(); return yykw_begin; }
"syntax" { yysetpos(); return yykw_syntax; }
"event" { yysetpos(); return yykw_event; }
"set" { yysetpos(); return yykw_set; }
"get" { yysetpos(); return yykw_get; }
"property" { yysetpos(); return yykw_property; }
"inout" { yysetpos(); return yykw_inout; }
"out" { yysetpos(); return yykw_out; }
"in" { yysetpos(); return yykw_in; }
"..." { yysetpos(); return yytk_DOT_DOT_DOT; }
"," { yysetpos(); return yytk_COMMA; }
"returns" { yysetpos(); return yykw_returns; }
")" { yysetpos(); return yytk_RPAREN; }
"(" { yysetpos(); return yytk_LPAREN; }
"__safe" { yysetpos(); return yytk_UNDERSCORE_UNDERSCORE_s_BLANK_a_BLANK_f_BLANK_e_BLANK; }
"on" { yysetpos(); return yykw_on; }
"based" { yysetpos(); return yykw_based; }
"enum" { yysetpos(); return yykw_enum; }
"to" { yysetpos(); return yykw_to; }
"binds" { yysetpos(); return yykw_binds; }
"private" { yysetpos(); return yykw_private; }
"protected" { yysetpos(); return yykw_protected; }
"public" { yysetpos(); return yykw_public; }
"use" { yysetpos(); return yykw_use; }
"metadata" { yysetpos(); return yykw_metadata; }
"unsafe" { yysetpos(); return yykw_unsafe; }
"as" { yysetpos(); return yykw_as; }
"variable" { yysetpos(); return yykw_variable; }
"constant" { yysetpos(); return yykw_constant; }
"is" { yysetpos(); return yykw_is; }
"record" { yysetpos(); return yykw_record; }
"handler" { yysetpos(); return yykw_handler; }
"type" { yysetpos(); return yykw_type; }
"foreign" { yysetpos(); return yykw_foreign; }
"import" { yysetpos(); return yykw_import; }
"library" { yysetpos(); return yykw_library; }
"widget" { yysetpos(); return yykw_widget; }
"end" { yysetpos(); return yykw_end; }
"module" { yysetpos(); return yykw_module; }
[A-Za-z_][A-Za-z0-9_\.]* { 
  MakeNameLiteral(yytext, &yylval.attr[1]);
  yysetpos();
   return NAME_LITERAL;
}
 /* See DOUBLE_LITERAL.t */
	/* This contains both INTEGER_LITERAL and DOUBLE_LITERAL rules */
	/* This ensures that they appear in this order, to ensure they match */
	/* correctly. */

[0-9]+"."[0-9]*([eE][-+]?[0-9]*)?([0-9a-zA-Z_\.]*) |
[0-9]*"."[0-9]+([eE][-+]?[0-9]*)?([0-9a-zA-Z_\.]*) |
[0-9]*"."[0-9]*([eE][-+]?[0-9]*)([0-9a-zA-Z_\.]*) |
[0-9]+([eE][-+]?[0-9]*)([0-9a-zA-Z_\.]*) {
	yysetpos();
	if (IsDoubleLiteral(yytext))
	{
		if (MakeDoubleLiteral(yytext, &yylval.attr[1]) == 0)
		{
			long t_position;
			GetCurrentPosition(&t_position);
			Error_DoubleLiteralOutOfRange(t_position);
			yylval.attr[1] = 0;
		}
	}
	else
	{
		long t_position;
        GetCurrentPosition(&t_position);
		Error_InvalidDoubleLiteral(t_position);
		yylval.attr[1] = 0;
	}
	return DOUBLE_LITERAL;
}

([0-9]+|0b[01]*|0x[0-9A-Fa-f]*)[0-9a-zA-Z_]* {
    yysetpos();
	if (IsIntegerLiteral(yytext))
	{
		if (MakeIntegerLiteral(yytext, &yylval.attr[1]) == 0)
		{
			long t_position;
			GetCurrentPosition(&t_position);
			Error_IntegerLiteralOutOfRange(t_position);
			yylval.attr[1] = 0;
		}
	}
	else
	{
		long t_position;
        GetCurrentPosition(&t_position);
		Error_InvalidIntegerLiteral(t_position);
		yylval.attr[1] = 0;
	}
    return INTEGER_LITERAL;
}

\"[^\n\r\"]*\" {
  MakeStringLiteral(yytext, &yylval.attr[1]);
  yysetpos();
  return STRING_LITERAL;
}
\\[ \t]*(\n|\r|\r\n) {
    AdvanceCurrentPosition(1);
    AdvanceCurrentPositionToNextRow();
}
[\n\r]+ {
    int i;
    GetCurrentPosition(&yylval.attr[0]);
    for(i = 0; i < yyleng; i++)
    {
        if (yytext[i] == '\n')
            AdvanceCurrentPositionToNextRow();
        else if (yytext[i] == '\r')
        {
            if (i + 1 < yyleng && yytext[i + 1] == '\n')
                i += 1;
            AdvanceCurrentPositionToNextRow();
        }
        else
            AdvanceCurrentPosition(1);
    }
    if (strchr(yytext, '\n') != NULL || strchr(yytext, '\r') != NULL)
        return SEPARATOR;
}
<<EOF>> {
	BEGIN (SPECIAL);
	unput('@');
	return END_OF_UNIT;
}

<SPECIAL>@ {
	BEGIN(0);
    if (MoveToNextFile())
        return NEXT_UNIT;
    yyterminate();
}

"--"[^\n\r]*        { yysetpos(); }
"//"[^\n\r]*        { yysetpos(); }
"/*"                { yysetpos(); BEGIN(COMMENT); }
<COMMENT>"*/"       { yysetpos(); BEGIN(0); }
<COMMENT>[^*\n\r]+  { yysetpos(); }
<COMMENT>\n|\r\n|\r { AdvanceCurrentPositionToNextRow(); return SEPARATOR; }
<COMMENT>"*"        { yysetpos(); }
\  { AdvanceCurrentPosition(1); }
\t { AdvanceCurrentPosition(1); }
. { long pos; GetCurrentPosition(&pos); Error_MalformedToken(pos, yytext); yysetpos(); }
%%
static FILE *s_current_stream = NULL;
void yynextfile(FILE *stream)
{
    yy_delete_buffer(YY_CURRENT_BUFFER);

    if (s_current_stream != NULL)
        fclose(s_current_stream);
        
    s_current_stream = stream;

    yy_switch_to_buffer(yy_create_buffer(stream, YY_BUF_SIZE));
}
int yywrap(void) { return 1; }
