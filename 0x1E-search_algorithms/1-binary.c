#include "search_algos.h"

/**
* print_array - prints array of numbers
* @array: pointer to array of numbers
* @low: the first number in the array
* @high: the last number in the array
*/

void print_array(int *array, size_t low, size_t high)
{
	char *separator = NULL;

	printf("Searching in array: ");
	for (; low <= high; low++)
	{
		if (separator)
			printf("%s%d", separator, array[low]);
		else
			printf("%d", array[low]);
		separator = ", ";
	}
	printf("\n");
}


/**
* binary_search - searches for value
* and returns index of value
* @array: pointer to array of numbers
* @size: size of array
* @value: value searched for
* Return: index of value
*/

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, mid, high = size - 1;

	if (array == NULL)
		return (-1);

	print_array(array, low, high);
	while (low != high)
	{
		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = (mid + 1);
		else
			high = (mid - 1);
		print_array(array, low, high);
	}
	if (array[low] == value)
		return (low);
	return (-1);
}
