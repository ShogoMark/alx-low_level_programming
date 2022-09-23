#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: the pointer to dest
 */

char *rot13(char *s)
{
	int count = 0, m;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		for (m = 0; m < 52; m++)
		{
			if (*(s + count) == alphabet[m])
			{
				*(s + count) = rot13[m];
				break;
			}
		}
		count++;
	}
	return (s);
}
