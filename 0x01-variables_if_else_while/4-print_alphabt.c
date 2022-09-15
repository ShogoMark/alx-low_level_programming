#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lt = 'a';

	while (lt <= 'z')
	{
		if (lt != 'e' && lt != 'q')
		{
			putchar(lt);
		}
		lt++;
	}
	putchar('\n');
	return (0)
}
