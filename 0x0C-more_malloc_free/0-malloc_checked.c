#include <unistd.h>
#include <stdlib.h>

/**
 * malloc_checked - Main entry
 * @b: The character to print
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *p = (int *) malloc(b * sizeof(int));

/* int *p = malloc(b) */

	if (p == NULL)
		exit(98);

	return (p);
}
