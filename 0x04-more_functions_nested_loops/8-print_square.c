#include "main.h"

/**
 * print_square - function that prints a square with '#'.
 * @size: size of square
 * followed by a new line
 *
 * Return: Always 0
 */
void print_square(int size)
{
	int x = 0, y;

	if (size > 0)
	{
		while (x < size)
		{
			c = 0;
			while (y < size)
			{
				_putchar(35);
				y++;
			}
			_putchar('\n');
			x++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
