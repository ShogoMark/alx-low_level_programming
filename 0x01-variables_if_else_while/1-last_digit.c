#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - code that assigns new values everytime it runs
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5\n");
	else if (n == 0)
		printf("Last digit of %d is %d and is zero\n");
	else if (n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n");
	
	return (0);
}
