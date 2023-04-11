#include <stdlib.h>
#include "main.h"

/**
* free_grid - A function designed to release the memory of a two-dimensional grid that was constructed using the process outlined in script 3.
* @grid: a pointer to a pointer. a 2d array. a grid
* @height: the height
*
* Description: this part should return the all clear from valgrind
* Return: none it is void:
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL || height <= 0)
		return;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
