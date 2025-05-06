#include "ll.h"

void
scan_toks (struct Parser* parser
		   char thing[TOKSIZE])
{
	char numbuf[TOKSIZE];
	int numbuf_inc=0;
	for (int i=0; i<sizeof thing; ++i) {
		char current = thing[i];
		if (isdigit(current)) {
			numbuf[numbuf_inc] = current;
			numbuf_inc++;
		} else {
			if (numbuf_inc > 0) {
				parser->tok[token] = numbuf;
				token++;
				memcpy(numbuf, '', TOKSIZE);
			}
		}
	}
}

void
pop_tok (struct Parser* parser)
{
 	struct Token tmp[parser->tokens];
	int start = 1;
	int end = parser->tokens;
	for (int i=start; i<end; ++i) {
		tmp[i - start] = parser->toks[i];
	}
	memcpy(parser->toks, tmp, parser->tokens);
}

/*
void
parse_factor (struct Parser* parser)
{

}
*/

void
ll (struct Parser* parser)
{
	pop_tok(parser);
}
