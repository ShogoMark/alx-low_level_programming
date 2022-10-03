#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments in program
 * @argc: the argument count
 * @argv: the array that keeps arguments
 */

int main(int argc, char *argv[])
{
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	printf("\n");

	return (0);
}
