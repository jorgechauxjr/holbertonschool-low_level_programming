#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - This functions adds two numbers
 * @n:an integer number
 * Description:function that prints all natural numbers from n to 98
 * Return: void
 **/
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			printf(",");
			printf(" ");

		}
	}
	if (n > 98)
	{
		for ( ; n > 98; n--)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
		}
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
