#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments in program
 * @argc: the argument count
 * @argv: the array that keeps arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
