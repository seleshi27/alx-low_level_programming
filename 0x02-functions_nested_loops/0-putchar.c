#include "main.h"
#include <string.h>

/**
 * Write a program that prints _putchar, followed by a new line.
 *
 * Return: Always (0)
 */
int _putchar(void)
{
	char c[] = "_putchar";
	int length, i;

	length = strlen(c);

	for (i = 0; i < length; i++)
	{
		_putchar(c[i]);
	}

	_putchar('\n');

	return (0);
}
