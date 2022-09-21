#include "main.h"

/**
 * rev_string - reverse string
 * @s: supplied pointer argument for string
 * Return: void
 */

void rev_string(char *s)
{
	int i, max, half;
	char a, z;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	max = i - 1;
	half = max / 2;
	while (half >= 0)
	{
		a = s[max - half];
		z = s[half];
		s[half] = a;
		s[max - half] = z;
		half--;
	}
}
