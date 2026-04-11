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
"THISCANNEVERHAPPEN" { yysetpos(); return yykw_THISCANNEVERHAPPEN; }
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
