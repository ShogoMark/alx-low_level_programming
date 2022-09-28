#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: pointer to string parameter
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int lt;

	if (*s == '\0')
		return (0);
	lt = _strlen_recursion(s + 1);
	return (lt + 1);
}
