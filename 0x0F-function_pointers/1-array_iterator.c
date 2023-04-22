#include "function_pointers.h"

/**
* array_iterator - maps an array thruogth a pointer
* @array: int array
* @size: size array
* @action: pointer of the function
*
* return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
