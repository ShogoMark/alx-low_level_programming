#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line.
 * @n: input integer
 *
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int x = 1;

	if (n > 0)
	{
		_putchar(92);

		while (x < n)
		{
			int count = 0;

			_putchar('\n');
			while (count < x)
			{
				_putchar(' ');
				count++;
			}
			_putchar(92);
			x++;
		}
	}
	_putchar('\n');
}
