#include "search_algos.h"

/**
 * print_array - prints an array
 * @array: input array
 * @start: starting index
 * @end: ending index
 */
void print_array(int *array, size_t start, size_t end)
{
	unsigned int i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
	{
		printf("%i, ", array[i]);
	}
	printf("%i\n", array[i]);
}

/**
 * binary_search - searches for a value in an array of integers
 * @array: input array
 * @size: size of array
 * @value: value to search for
 * Return: index of array where value is found, -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int mid, start, end;

	if (array == NULL)
		return (-1);

	for (start = 0, end = size - 1; start <= end;)
	{
		print_array(array, start, end);
		mid = (start + end) / 2;
		if (value > array[mid])
			start = mid + 1;
		else if (value < array[mid])
			end = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
