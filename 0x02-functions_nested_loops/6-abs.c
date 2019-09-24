#include "holberton.h"
/**
 * _abs - entry point
 * @number: an integer
 * Description: give the absolute value of an integer
 * Return: 1 or 0
 */
int _abs(int number)
{
	if (number < 0)
	{
		number = number * (-1);
	}
	return (number);
}
