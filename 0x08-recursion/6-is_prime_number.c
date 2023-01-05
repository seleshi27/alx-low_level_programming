#include "main.h"

/**
 *prime - checks if number n is prime
 *
 *@n: number to check
 *@i:factor
 *
 *Return: 1 if prime, 0 if not
 */

int prime(int n, int i)
{
	/* first prime n = 2; or if divisible by different n than itself*/
	if (n < 2 || (n % i == 0 && n != i))
		return (0);

	/* if divisble by itself, then prime number */
	if (i == n && n % i == 0)
		return (1);

	return (prime(n, ++i));

}

/**
 *is_prime_number - states if number is prime
 *
 *@n: number to check
 *
 *Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	/* smallest divisor = 2 */
	return (prime(n, 2));
}
