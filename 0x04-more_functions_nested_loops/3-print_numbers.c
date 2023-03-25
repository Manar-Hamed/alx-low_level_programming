#include "main.h"

/**
* print_numbers - prints 0-9
* Return: void. no return.
*/

void print_numbers(void)
{
	int i = 0;

	do {
		_putchar(i + 48);
		i++;
	} while (i >= 0 && i <= 9);
	-putchar('\n');
}
