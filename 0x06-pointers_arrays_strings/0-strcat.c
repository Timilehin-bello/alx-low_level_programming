#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 *
 * @dest: destination string; src string is appended to it
 *
 * @src: Source string; gets appended to dest string
 *
 * Return: Pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int j = 0, i;

	while (dest[j])
	{
		j++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[j] = src[i];
		j++;
	}

	dest[j] = '\0';
	return (dest);
}
