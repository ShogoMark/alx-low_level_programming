#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 * @seperator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int i;
	
	va_start(print, n);

	for (i = 0; i < n; i++)
	{
		printf("%d%c", va_arg(print, int), separator);
	}
	printf("\n");
}

