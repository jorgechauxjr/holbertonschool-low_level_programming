#include <unistd.h>
#include <stdlib.h>

/**
 * malloc_checked - Main entry
 * @b: The character to print
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);


	if (p == NULL)
		exit(98);

	return (p);
}
