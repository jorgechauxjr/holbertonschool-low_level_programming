#include <unistd.h>
#include <stdlib.h>
/**
 * _realloc - Main entry
 *@ptr: pointer
 *@old_size: int
 *@new_size: unsigned int
 *Description:function that creates an array of integers.
 * Return:int pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr, *ptr2;
	unsigned int c;

	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		newptr = malloc(new_size);

			if (newptr == NULL)
				free(ptr);
				return (NULL);
	}
	newptr = malloc(new_size);

	if (newptr == NULL)
		return (NULL);

	ptr2 = ptr;

	for (c = 0; c < old_size; c++)
		newptr[c] = ptr2[c];

	free(ptr);

	return (newptr);
}
