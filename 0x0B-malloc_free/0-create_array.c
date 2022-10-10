#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array of chars
 * @size: size of array
 * @c: data type of array
 * Return: Pointer to an array of chars
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(c) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
