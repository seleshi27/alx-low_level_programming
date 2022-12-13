#include "main.h"
#include <ctype.h>

/**
 * _islower - function that returns true for lower case number
 *
 * Returns 1 if c is lowercase
 *
 * Returns 0 otherwise
 */

int _islower(int c)
{
	int i = islower(c);

	if (i > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
