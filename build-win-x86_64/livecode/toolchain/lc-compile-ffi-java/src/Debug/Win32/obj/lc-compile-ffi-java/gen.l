%{
#include "gen.h"

extern YYSTYPE yylval;
#include "position.h"
#define yysetpos() { GetCurrentPosition(&yylval.attr[0]); AdvanceCurrentPosition(yyleng); }
#include "literal.h"
#include "report.h"
%}
%s SPECIAL
%x COMMENT
%%
"THISCANNEVERHAPPEN" { yysetpos(); return yykw_THISCANNEVERHAPPEN; }
"." { yysetpos(); return yytk_DOT; }
"false" { yysetpos(); return yykw_false; }
"true" { yysetpos(); return yykw_true; }
"[]" { yysetpos(); return yytk_LBRACKET_RBRACKET; }
"nothing" { yysetpos(); return yykw_nothing; }
"String" { yysetpos(); return yykw_String; }
"char" { yysetpos(); return yykw_char; }
"boolean" { yysetpos(); return yykw_boolean; }
"double" { yysetpos(); return yykw_double; }
"float" { yysetpos(); return yykw_float; }
"long" { yysetpos(); return yykw_long; }
"int" { yysetpos(); return yykw_int; }
"short" { yysetpos(); return yykw_short; }
"byte" { yysetpos(); return yykw_byte; }
"super" { yysetpos(); return yykw_super; }
"extends" { yysetpos(); return yykw_extends; }
"?" { yysetpos(); return yytk_QUESTIONM; }
">" { yysetpos(); return yytk_GREATER; }
"<" { yysetpos(); return yytk_LESS; }
"..." { yysetpos(); return yytk_DOT_DOT_DOT; }
"throws" { yysetpos(); return yykw_throws; }
"returns" { yysetpos(); return yykw_returns; }
")" { yysetpos(); return yytk_RPAREN; }
"(" { yysetpos(); return yytk_LPAREN; }
"named" { yysetpos(); return yykw_named; }
"is" { yysetpos(); return yykw_is; }
"as" { yysetpos(); return yykw_as; }
"transient" { yysetpos(); return yykw_transient; }
"volatile" { yysetpos(); return yykw_volatile; }
"final" { yysetpos(); return yykw_final; }
"abstract" { yysetpos(); return yykw_abstract; }
"strictfp" { yysetpos(); return yykw_strictfp; }
"native" { yysetpos(); return yykw_native; }
"synchronized" { yysetpos(); return yykw_synchronized; }
"protected" { yysetpos(); return yykw_protected; }
"public" { yysetpos(); return yykw_public; }
"constant" { yysetpos(); return yykw_constant; }
"variable" { yysetpos(); return yykw_variable; }
"constructor" { yysetpos(); return yykw_constructor; }
"," { yysetpos(); return yytk_COMMA; }
"implements" { yysetpos(); return yykw_implements; }
"default" { yysetpos(); return yykw_default; }
"method" { yysetpos(); return yykw_method; }
"inherits" { yysetpos(); return yykw_inherits; }
"interface" { yysetpos(); return yykw_interface; }
"class" { yysetpos(); return yykw_class; }
"use" { yysetpos(); return yykw_use; }
"end" { yysetpos(); return yykw_end; }
"package" { yysetpos(); return yykw_package; }
"foreign" { yysetpos(); return yykw_foreign; }
[A-Za-z_][A-Za-z0-9_]* {
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
\\(\n|\r|\r\n) {
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
