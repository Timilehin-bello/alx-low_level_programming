#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords
 *
 * Return: Always 0
 */

int main(void)
{
	char k[200];
	int num = 0;
	int rnum = 0;
	char *key = k;

	srand(time(NULL));

	while (num < 2645)
	{
		rnum = rand() % 122;

		if (rnum > 32)
		{
			*key = rnum;
			key = key + 1;
			num += rnum;
		}
	}

	*key = (2772 - num);
	*(key + 1) = '\n';
	printf("%s", k);
	return (0);
}
