#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: number length of line
 * followed by a new line
 * Return: Always 0
 */

void print_line(int n)
{
	int x = 0;

	if (n > 0)
	{
		while (x < n)
		{
			_putchar(95);
			x++;
		}
	}
	_putchar('\n');
}
