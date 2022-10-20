#include "main.h"

/**
 * _strstr - function locate
 * @haystack: pointer to char
 * @needle: pointer to char
 * Return: NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *product = haystack, *lneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (product);
		}
		needle = lneedle;
		product++;
		haystack = product;
	}
	return (0);
}
