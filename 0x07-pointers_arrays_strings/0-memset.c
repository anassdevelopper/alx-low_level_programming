#include "main.h"

/**
 * set_chars - sets the first n characters of an array to a given value
 * @s: pointer to the array
 * @b: the value to set
 * @n: number of characters to set
 *
 * Return: pointer to the modified array
 */
char *set_chars(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
