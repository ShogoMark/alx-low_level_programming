#include <stdio.h>
#include <unistd.h>

/**
 * main - alphabets
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char let;
       
	for (let = "a"; let <= "z"; let++)
	{
		putchar(let);
	}
	
		putchar(\n);

	return (0);
}
