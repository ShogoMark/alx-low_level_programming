#include "main.h"

/**
 * _isdigit - checks if parameter is a number between 0 to 9.
 * @c: digit to be checked
 * Return: 1 if c is a digit, otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
