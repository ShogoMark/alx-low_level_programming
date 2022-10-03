#include "main.h"
#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: argument counts
 * @argv: arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argc;

	printf("My name is %s.\n", argv[0]);
	return (0);
}
