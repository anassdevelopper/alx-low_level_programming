#include "main.h"

/**
 * test_islower - checks the code for lowercase character
 *
 * @n: the character to be checked
 *
 * Return: Always 0
 */

int test_islower(int n)
{
	int r;

	r = _islower(n);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

/**
 * _islower - checks for lowercase character
 *
 * @c: the character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
