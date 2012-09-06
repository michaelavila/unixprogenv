/* idiff:  interactive diff */

#include <stdio.h>
#include <ctype.h>
char	*progname;
#define	HUGE	10000	/* large number of lines */

main(argc, argv)
	int argc;
	char *argv[];
{
	FILE *fin, *fout, *f1, *f2, *efopen();
	char buf[BUFSIZ], *mktemp();
	char *diffout = "idiff.XXXXXX";

	progname = argv[0];
	if (argc != 3) {
		fprintf(stderr, "Usage: idiff file1 file2\n");
		exit(1);
	}
	f1 = efopen(argv[1], "r");
	f2 = efopen(argv[2], "r");
	fout = efopen("idiff.out", "w");
	mktemp(diffout);
	sprintf(buf,"diff %s %s >%s",argv[1],argv[2],diffout);
	system(buf);
	fin = efopen(diffout, "r");
    printf("%s", "hello");
}

#include "efopen.c"
