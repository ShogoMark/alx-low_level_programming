#include "main.h"

/**
 * swap_int: swaps the values of two integers
 *
 * @a: integer input 1
 * @b: integer input 2
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swp = *a;

	*a = *b;

	*b = swp;
}
