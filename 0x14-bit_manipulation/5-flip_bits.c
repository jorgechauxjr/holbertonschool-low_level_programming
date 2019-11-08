#include <stdio.h>
#include "holberton.h"
/**
 *flip_bits -.
 *@n:bit number in poiunter char
 *@m:is the index, starting from 0 of the bit you want to get
 *Description: function that returns the number of bits you would need
 * Return: 1 if succed -1 otherwise
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int c = 0;

	n = n ^ m;

	while (n > 0)
	{
		if (n & 1)
			c++;

		n = n >> 1; /*disminuir n*/
	}
	return (c);
}
