#include "main.h"

/**
* string_toupper - function that changes all lowercase letters to uppercase.
* @s: char variable
* Return: s
*/

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
