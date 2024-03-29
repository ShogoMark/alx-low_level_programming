#include "search_algos.h"
/**
* linear_search - searches for a value in an array
* @array:  pointer to the first element
* @size: number of element in array
* @value: the value to search for
* Return: index where value is located
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
