#include "main.h"

/**
 * more_numbers - Print 10times the numbers 0 to 4
 *
 * Return: 10times the numbers 0 to 14
 */

void more_numbers(void)
{
	int i = 0;

	while (i <= 9) {
		char *j = "01234567891011121314";

		while (*j) {
			_putchar(*j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
