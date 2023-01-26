#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @size : is the number of elements in the array
 * @cmp : is a pointer to the function to be used to compare values
 * @array : is the array of numbers worked on
 * Return: 0 always.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int size i = 0;

	if (size <= 0)
	{
		return (-1)
	}
	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]) == 1)
				return (i);
			i++;
		}
	}
	return (-1);
}
