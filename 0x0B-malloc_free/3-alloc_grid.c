#include <unistd.h>
#include <stdlib.h>

/**
 * alloc_grid - Main entry
 * @width: int
 *@height: int
 * Return: char pointer
 */
int **alloc_grid(int width, int height)
{
	int **arr, c, x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **) malloc(height * sizeof(int *));

	if (arr != NULL)
	{
		for (c = 0; c < height; c++)
		{
			arr[c] = (int *) malloc(width * sizeof(int));
			if (arr[c] == NULL)
			{
				for (c--; c >= 0; c--)
				{
				free(arr[c]);
				}
				free(arr);
				return (NULL);
			}
		}
		for (x = 0; x < height; x++)
		{
			for (y = 0; y < width; y++)
			{
				arr[x][y] = 0;
			}
		}
		return (arr);
	}
	else
	{
		return (NULL);
	}
}
