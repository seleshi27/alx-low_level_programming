#include "main.h"

/**
 * Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 */

void print_alphabet_x10(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 97;

		while (j <= 122)
		{
			_putchar(j);

			j++;
		}
		_putchar('\n');

		i++;
	}

}
