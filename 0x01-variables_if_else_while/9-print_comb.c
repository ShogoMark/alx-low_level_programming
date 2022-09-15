#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int f;
	for (f = '0'; f <= '9'; f++)
	{
		putchar(f);
		if (f != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
