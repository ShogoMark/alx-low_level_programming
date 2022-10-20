#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1 to be compared
 * @s2: string 2 to be compared
 * Return: The differnce of s1 - s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, cp = 0;

	while (cp == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		cp = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (cp);
}
