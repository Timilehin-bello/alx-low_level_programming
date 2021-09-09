#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 *
 * @s: Input string
 *
 * Return: Encoded string
 */
char *rot13(char *s)
{
	int count = 0, i;
	char alpha_letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + count) != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*(s + count) == alpha_letters[i])
			{
				*(s + count) = rot13[i];
				break;
			}
		}
		count++;
	}

	return (s);
}
