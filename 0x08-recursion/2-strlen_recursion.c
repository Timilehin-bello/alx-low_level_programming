#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse
 *
 * @s: Pointer to the string
 *
 * Return: void
 *
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
