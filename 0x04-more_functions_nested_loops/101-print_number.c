#include <stdio.h>

/**
 * print_number - print numbers with puchart.
 * @n: integrer variable
 * Return: Always 0.
 */

int main(void)
{
	int n;

	if (n >= 0 && n <= 9)
	{
		_putchar(n);
	}
	else if (n >= 10 && n <= 99)
		{
			n = n % 10;						

		}


	printf("\n");
	return (0);
}
