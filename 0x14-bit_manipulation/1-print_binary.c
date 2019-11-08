#include <stdio.h>
#include "holberton.h"
/**
 *print_binary -.
 *@n: int number
 *Description: Function that receives an int and prints the binary
 * Return: void
 **/

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1, copy = n; /*copy of int in binary*/
	unsigned long int contBits = 0; /*counter of bits*/

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (copy) /*copy != 0*/
	{
		copy = copy >> 1;
		contBits++;
	}
	mask = mask << (contBits - 1);

	while (mask) /*mask != 0*/
	{
		if (mask & n)
			_putchar('1');
		else
			_putchar('0');

		mask = mask >> 1;
	}
}
