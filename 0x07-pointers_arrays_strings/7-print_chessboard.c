#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: 2-dimensional array/matrix
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; j < 8; j++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(*(*(i + a) + j));
		}
		_putchar('\n');
	}
}
