#include <string.h>
#include <stdio.h>

void main (int argc, char* argv[])
{
	char* buff = malloc(10);
	strcpy(buff,argv[1]);
	free(buff);
	
	
	return 0;
}
