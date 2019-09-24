#include "holberton.h"
/**
 * print_last_digit - entry point
 * @number: integer
 * Description: return 1 if c is in lower case
 * Return: 1 or 0
 */
int print_last_digit(int number)
{
	int lastDigit = number % 10;

	if (lastDigit < 0)
	{
		lastDigit = lastDigit * (-1);
		_putchar('0' + lastDigit);
		return (lastDigit);
	}
	_putchar('0' + lastDigit);
	return (lastDigit);
}
