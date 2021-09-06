#include "main.h"
/**
  * swap_int - Swaps the values of two integers
  *
  * @a: Integer a to swap
  * @b: Integer b  to swap
  *
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
