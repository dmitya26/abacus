#include <string.h>
#include <stdlib.h>
#include "ll.h"
#include "debugutils.h"

void
ll_init (struct Parser* p,
		 int debug)
{
	p->tokens = 0;
	p->debug=debug;
	printv(p, "Debug=1");
	memset(p->toks, 0, sizeof *p->toks);
}

int
main (int argc,
	  char* argv[])
{
	// Defined in makefile.
	#ifdef DEBUG
		int debug=1;
	#endif

	struct Parser p;
	ll_init(&p, debug);

	scan_toks(&p);
	ll(&p);

	print_parse_node(&p);

	return 0;
}
