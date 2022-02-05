#include <stdio.h>

void main(int argc, char** argv)
{
	//printf accepts multiple arguments
	//first argument is a format string
	//programmers often assume this is the only argument

	printf(argv[1]);
}