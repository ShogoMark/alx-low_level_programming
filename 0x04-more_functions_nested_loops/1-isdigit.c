#include "main.h"

/**
 * _isdigit - checks if parammeter is a number between 0 - 9.
 * c: number to be checked
 * Return: 1 if c is a digit between 0 and 9, else 0
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
