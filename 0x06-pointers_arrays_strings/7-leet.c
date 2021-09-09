#include "main.h"

/**
  * leet - Encodes a string into 1337
  *
  * @s: String to encode
  *
  * Return: Encoded string
  */
char *leet(char *s)
{
	int a = 0, b = 0;
	char leet_letters[5] = {'A', 'E', 'O', 'T', 'L'};
	char leet_nums[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		b = 0;

		while (b < 5)
		{
			if (s[a] == leet_letters[b] || s[a] - 32 == leet_letters[b])
			{
				s[a] = leet_nums[b];
			}

			b++;
		}

		a++;
	}

	return (s);
}
