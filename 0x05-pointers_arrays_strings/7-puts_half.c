#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: input string
 * Return: void
 */

void puts_half(char *str)
{
	int lt = 0;

	while (*(str + lt) != '\0')
		lt++;
	if (lt % 2 == 0)
		lt /= 2;
	else
		lt = lt / 2 + 1;
	while (*(str + lt) != '\0')
	{
		_putchar(*(str + lt));
		lt++;
	}
	_putchar('\n');
}
