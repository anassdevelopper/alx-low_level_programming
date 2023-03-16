#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the sizes of various data types in bytes
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of a char: %ld byte(s)\n", sizeof(c));
	printf("size of a long: %ld byte(s)\n", sizeof(i));
	printf("size of a long: %ld byte(s)\n", sizeof(li));
	printf("size of a long long: %ld byte(s)\n", sizeof(lli));
	printf("size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
