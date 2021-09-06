#include "main.h"
#include <stdio.h>

/**
  * print_array - Prints the elements of an array 
  * @a: Array integers
  * @n: Number of element printed
  *
  * Return: void
  */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
