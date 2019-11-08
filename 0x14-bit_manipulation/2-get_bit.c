#include <stdio.h>
#include "holberton.h"
/**
 *get_bit -.
 *@n: int number
 *@index:is the index, starting from 0 of the bit you want to get
 *Description: function that returns the value of a bit at a given index.
 * Return: int, the bit you want to get
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 64) /*validate if idx is greater than the bits*/
		return (-1); /*unsigned int 8 bytes x 8 = 64 bits*/

	if (n == 0)
		return (0);

	mask = mask << index;

	if (mask & n)
		return (1);
	else
		return (0);

	return (-1);
}
