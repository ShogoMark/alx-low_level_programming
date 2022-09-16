#include "main.h"
#include <stdio.h>

/**
 * _isupper - function that checks uppercase character.
 *
 * Return: 1 if c is uppercase or 0 otherwise
 */

int _isupper(int c)
{
	char uppercase;
	int isupper = 0;

	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
