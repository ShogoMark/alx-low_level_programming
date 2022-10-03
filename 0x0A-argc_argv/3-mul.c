#include "main.h"
#include <stdio.h>

/**
 * main - multiplies two integers
 * @argv: stores the parameters
 * @argc: numbers of parameters
 * Return: 0
 */

int main(int argc, int *argv[])
{
	int i, mut = 0;
	(void)argc;

	for (i = 1; i < argc; i++)
	{
		printf("%d\n", argv[i]);
		mut = mut * argv[i];
	}
	if (i < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("Product = %d\n", mut);
	}
	return (0);
}
