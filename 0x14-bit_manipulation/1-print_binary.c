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
	unsigned long int mask = n;
	int contBits;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask) /*mask != 0*/
	{
		mask = mask >> 1;
		contBits++;
	}
	mask = 1 << (contBits - 1);

	while (mask) /*m != 0*/
	{
		if (n & mask)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		mask = mask >> 1;
	}
}
