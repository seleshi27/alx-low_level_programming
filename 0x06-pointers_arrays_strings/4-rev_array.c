#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 *
 * @a: is a int param
 * @n: is a int param
 * Return: 0
*/

void reverse_array(int *a, int n)

{
	int i, j, tmp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
