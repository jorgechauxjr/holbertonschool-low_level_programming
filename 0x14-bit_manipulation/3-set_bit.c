#include <stdio.h>
#include "holberton.h"
/**
 *set_bit -.
 *@n:bit number in poiunter char
 *@index:is the index, starting from 0 of the bit you want to get
 *Description: function that set the value of a bit at a given index.
 * Return: 1 if succed -1 otherwise
 **/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index > 64) /*validate if idx is greater than the bits*/
		return (-1); /*unsigned int 8 bytes x 8 = 64 bits*/

	mask = mask << index;

	*n = (mask | *n);
	return (1);
}
