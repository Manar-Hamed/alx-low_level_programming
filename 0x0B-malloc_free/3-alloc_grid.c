#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
* alloc_grid - a function that returns a pointer to a 2d array
* @width: self explainatory. the rows.
* @height: probably not the width. the vert
*
* Description: Create a grid with a specific width and height, where every index is initialized as 0.
* Return: The output will be a pointer, or null if the operation is unsuccessful.
* A: test cases if we get a 0 or negative size. return NULL
* B: we test if the input is too much so we will return null
* C: we need to free the test memory. dont want valgrind on us
* D: we now habve our pointer to pointer, be the size of an int pointer
*	multiplied by our height which is how many y- long stuff we want
* E: loop from i to the width or x-long, we will assign
*	the pointer at the int pointer index with another malloc
*	but now that size is not an int pointer but a just an int
*	so we had a straight line vertically down with arrays
*	now we willed those v arrays with ints
* F: loop through each index now and insert a 0
* G: return the pointer
* I deleted stuff my comments are screwed i changed stuff also
* D again: I check if height and width can overflow both.
* TLDR: Free the allocated memory starting from the rows, 
* going backwards. Finally, free the initial pointer you allocated using malloc.
*/

int **alloc_grid(int width, int height)
{
	int **pointer;
	int i, j;

	if (width <= 0 || height <= 0)/* A */
		return (NULL);
	if (width > INT_MAX || height > INT_MAX)
		return (NULL);
	pointer = malloc(height * sizeof(int *));/* D */
	if (pointer == NULL)
	{
		free(pointer);
		return (NULL);
	}
	for (i = 0; i < height; i++)/* E */
	{
		pointer[i] = malloc(width * sizeof(int));
		if (pointer[i] == NULL)
		{
			for ( ; i >= 0; i--)
				free(pointer[i]);
			free(pointer);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)/* F */
		for (j = 0; j < width; j++)
			pointer[i][j] = 0;
	return (pointer);/* G */
}
