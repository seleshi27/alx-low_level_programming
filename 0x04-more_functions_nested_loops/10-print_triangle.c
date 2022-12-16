#include "main.h"

/**
 * print_triangle - print a triangle.
 *
 * @size: integer variable.
 *
 * void function.
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (i = 0; i < size; i++) /* rows */
		{
			for (j = 0; j < size; j++) /* Columns */
			{
				if (j >= size - i - 1)
				{
					_putchar('#');
				}

				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
