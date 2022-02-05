#include <stdio.h>
#include <stdlib.h>

int functionFunction(char* param)
{
	char* localString = "functionFunction";  /* Will help us locate stuff in memory */
	int localInt = 0xffeeddcc;
	char localstring2[10];
	strcpy(localstring2, param);    /* Might overflow since the buffer size is 9 caracters + null caracter */

	return 1;
}

int main(int argc, char *argv[])
{
	char* localString = "main function";
	int localInt = 0x11223344;
	functionFunction(argv[1]);
	
	printf("Hi");

	return 0;
}
