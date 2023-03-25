#include "main.h"

/**
* print_most_numbers - prints 0-9 with a new line, excludes 2 and 4
* Description: Uses headers to link and a nested loops to achieve goal
* Return: void. no return.
*/

void print_most_numbers(void)
{
	int i ;

	for (i = 0; i < 9; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar(i + 48);
	}
	_putchar('\n');
}

