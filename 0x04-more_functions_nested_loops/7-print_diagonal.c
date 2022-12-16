#include "main.h"

/**
 * print_diagonal - print diagonal line.
 * @n: int parameter size.
 * Return: none.
 */

void print_diagonal(int n)
{
	int i, space, end;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		end = 1;
		for (i = 0; i < n; i++) /* rows */
		{
			for (space = 0; space < end; space++) /* Columns */
			{
				if (space == end - 1)
					_putchar(92); /* print '\' */
				else
					_putchar(32); /* print space ' ' */
			}
			_putchar('\n');
			end++;
		}
	}

}
