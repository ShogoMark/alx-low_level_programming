#include "main.h"

/**
 * int factorial - function that returns factoria of a number
 * @n: given number
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
	return -1;
	{
		if (n == 0)
		     return 1;
		{
			_putchar(n * (n - 1));
			n++;
		}
	}
}
