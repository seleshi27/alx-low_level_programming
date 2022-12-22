#include "holberton.h"
#include <stdio.h>

/**
 * _strncpy - function that copies a string.
 *
 * @dest: destination.
 * @src: source.
 * @n: variable integer.
 *
 * Return:  a string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
	i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
	dest[j] = src[j];
	}
	for ( ; j < n; j++)
	{
	dest[j] = '\0';
	}
	return (dest);
}
