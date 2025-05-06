#pragma once
#include <stdio.h>
#include "ll.h"

void
printv (struct Parser* parser,
		char message[100])
{
	if (parser->debug == 1) {
		printf("%s", message);
	}
}

void
print_lex_node (struct Parser* parser,
				struct Token* toks)
{
	printv(parser, toks->tok_raw);
}

void
print_parse_node (struct Parser* parser)
{
	for(int i=0; i<parser->tokens; ++i) {
		print_lex_node(parser, &parser->toks[i]);
	}
}
