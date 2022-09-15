#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int f;
	char lt;

	for (f = 48; f < 58; f++)
	{
		putchar(f);
	}
	for (lt = 'a'; lt <= 'f'; lt++)
	{
		putchar(lt);
	}
	putchar('\n');
	return (0);
}
