#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * to print alphabet in lowercase and uppercase
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int lt;

	for (lt = 'a'; lt <= 'z'; lt++)
	{
		putchar(lt);
	}
	for (lt = 'A'; lt <= 'Z'; lt++)
	{
		putchar(lt);
	}
	putchar(lt);

	return (0);
}
