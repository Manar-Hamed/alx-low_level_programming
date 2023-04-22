#include "function_pointers.h"

/**
* int_index -  searching for an integer
* @array: int array
* @size: size array
* @cmp: comparison of the function
*
* Return: void
*/
int int_index(int *array, int size, int (*cmp)(int));
{
	int i = 0;

	if (array && size & cmp)
		while (i < size)
		{
		if (cmp(array[i]))
			return (i);
		i++;
		}
}
