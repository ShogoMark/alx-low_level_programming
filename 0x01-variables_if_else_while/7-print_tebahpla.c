#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Successful)
 */

int main(void)
{
	int lt;

	for (lt = 'z'; lt <= 'a'; lt--)
	{
		putchar(lt);
	}

	putchar('\n');
	return (0);
}
