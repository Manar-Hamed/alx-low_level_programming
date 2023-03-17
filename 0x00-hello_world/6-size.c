#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * 'the program's prints the size'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int m;
	long int n;
	long long int c;
	float r;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(m));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(n));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(r));
	return (0);
}
