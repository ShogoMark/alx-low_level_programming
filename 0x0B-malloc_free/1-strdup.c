#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string.
 * Return: char pointer
 */

char *_strdup(char *str)
{
	char *strtwo;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++);
	strtwo = (char *)malloc(sizeof(char) * (i + 1));

		if (strtwo == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		strtwo[j] = str[j];

	return (strtwo);
}
