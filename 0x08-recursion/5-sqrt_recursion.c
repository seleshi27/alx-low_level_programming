#include "main.h"

/**
 *is_sqrt - checks if number is square root of a number
 *
 *@g: number to check if it is a square root
 *@r: test number
 *
 *Return: square root g, -1 if else
 */

int is_sqrt(int g, int r)
{
	if (g * g == r)
		return (g);
	if (g * g < r)
		return (is_sqrt(++g, r));
	else
		return (-1);
}


/**
 *_sqrt_recursion - returns the natural square root of a number
 *
 *@n: numbert to test
 *
 *Return: square root of number n
 */

int _sqrt_recursion(int n)
{
	if (n != 0)
	return (is_sqrt(0, n));
	else
		return (0);
}
