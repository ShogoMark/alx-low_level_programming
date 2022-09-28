#include "main.h"

/**
 * int factorial - function that returns factoria of a number
 * @n: int parameter
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
