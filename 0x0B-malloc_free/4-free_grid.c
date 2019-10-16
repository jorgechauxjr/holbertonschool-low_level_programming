#include <unistd.h>
#include <stdlib.h>
/**
 *free_grid - Main entry
 * @grid: double pointer
 *@height: int
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int c;

	for (c = 0; c < height; c++)
	{
		free(grid[c]);
	}
	free(grid);
}
