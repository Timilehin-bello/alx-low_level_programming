#include "main.h"

/**
 * print_most_numbers - Prints 0-9 leaving value 2,4.
 *
 * Return: value 0-9
 *
 */

void print_most_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
		i++;
	}

	_putchar('\n');
}
