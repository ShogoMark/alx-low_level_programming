#include "variadic_functions.h"

/**
 * @separator:  string to be printed between the strings
 * @n: number of strings passed
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list printstrings;
	char *str;
	unsigned int i;

	va_start(printstrings, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(printstrings, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(printstrings);
}
