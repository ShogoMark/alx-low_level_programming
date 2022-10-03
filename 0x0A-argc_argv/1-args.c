#include "main.h"
#include <stdio.h>

/**
 * main - print number of arguments
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("argc = %d\n", argc - 1);
	return (0);
}
