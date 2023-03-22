#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet ten times, followed by a new line after each set.
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	while (i < 10)
	{
		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}

		putchar('\n');

		i++;
		letter = 'a';
	}
}
