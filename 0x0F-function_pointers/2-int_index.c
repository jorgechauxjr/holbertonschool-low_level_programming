#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: input array
 * @size: size of the array
 * @cmp: pointer to the function
 *Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL)
	{
	int n, c;

	if (size <= 0)
		return (-1);

	for (c = 0; c < size; c++)
	{
		n = cmp(array[c]);

		if (n != 0)
		{
			return (c);
		}
	}
	}
	return (-1);
}
