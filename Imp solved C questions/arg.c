// Name of program mainreturn.cpp
#include <stdio.h>

int main(int argc, char** argv)
{
	printf("You have entered %d arguments \n", argc);

	for (int i = 0; i < argc; ++i)
		printf("%s\n", argv[i]);

	return 0;
}