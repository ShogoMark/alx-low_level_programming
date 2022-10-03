#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two integers
 * @argv: stores the parameters
 * @argc: numbers of parameters
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, mut = 0;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
		mut = mut * atoi(argv[i]);
	}
	if (argc < 2)
	{
		printf("Error\n");
	}
	else
	{
		printf("Product = %d\n", mut);
	}
	return (0);
}
