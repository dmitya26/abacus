#pragma once
#include <string.h>
#include <ctype.h>

#define TOKSIZE 1000 // Max tok size. Spaces and newlines are not processed as tokens.

enum TokTypes {
	OPERATOR,
	NUMBER,
	ENCLOSER,
};

struct Token {
	char*         tok_raw;
	enum TokTypes tok_type;
};

struct Parser {
	int debug; // Set using GCC macro arg.
	int tokens; // Token slots in use.
	struct Token toks[TOKSIZE];
};

void
scan_toks (struct Parser* parser);

void
pop_tok (struct Parser* parser);

void
ll (struct Parser* parser);
