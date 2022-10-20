#include "main.h"

/**
 * _islower - checks for lowercase
 *
 * @c: c is an ascii character
 * Return: void
 */

int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
