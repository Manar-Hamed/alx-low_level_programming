#include "main.h"
#include <stdlib.h>

/**
* copyit- helper function that copies over  string
* @ptr: a pointer the original og array
* @pointer: a new pointer
* @old_size: the size of the old stuff cause to be copied
*
* Description: copies the old pointer into the new pointer
* Return: nothing (void).
*/

void copyit(char *ptr, char *pointer, int old_size)
{
	if (old_size)
	{
		*pointer = *ptr;
		copyit(ptr + 1, pointer + 1, old_size - 1);
	}
}

/**
* _realloc - write a function that reallocates a memory
* @ptr: a old pointer given to us
* @old_size: the old size of the memory
* @new_size: the new size of the memory
*
* Description: relocated memory block
* Return: returns the pointer or null
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pointer;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size || ptr != NULL)
	{
		pointer = malloc(new_size);
		if (!pointer)
			return (NULL);
		copyit(ptr, pointer, old_size);
	}
	free(ptr);
	return (pointer);
}
