#include "main.h"

/**
 *print_number - prints an integer
 *@n: integer to print
 *
 */

void print_number(int n);
{
	unsigned int u = n; 

	if (n < 0)
	{
		_putchar('-');
		u = -u;
	}

	if (u / 10)
		print_number(u / 10);   

	_putchar((u % 10) + '0');
}
