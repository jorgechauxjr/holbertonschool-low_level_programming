#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of an array
 * @array: input array
 * @size: size of the array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t c;

	if (array != NULL && action != NULL)
	{
	for (c = 0; c < size; c++)
		action(array[c]);
	}

}
