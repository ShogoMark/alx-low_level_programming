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
		do {
		       putchar(lt);
		       lt++;
		   }
       		while (lt != 'e' && lt != 'q')
	}

	putchar('\n');
	return (0);
}
