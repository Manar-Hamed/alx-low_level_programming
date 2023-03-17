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
	char e;
	int m;
	long int a;
	long long int n;
	
	float r;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(m));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(n));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(e));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(r));
	return (0);
}
