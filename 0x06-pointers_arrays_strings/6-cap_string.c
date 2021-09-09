#include "main.h"
#include <stdio.h>

/**
 * cap_string - Capitalizes all words of a string
 *
 * @s: Input of string
 *
 * Return: Capitalize word
 */

char *cap_string(char *s)
{
	int a = 0, i;
	char sep[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;

		while (i < 13)
		{
			if ((a == 0 || s[a - 1] == sep[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;

			i++;
		}

		a++;
	}

	return (s);
}
