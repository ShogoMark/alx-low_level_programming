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
	int fig_1, fig_2, mut;

	if (argc != 3)
	{
		printf("Error\n");
	}
	else
	{
		fig_1 = atoi(argv[1]);
		fig_2 = atoi(argv[2]);
		mut = fig_1 * fig_2;
		printf("%d\n", mut);
	}
	return (0);
}
