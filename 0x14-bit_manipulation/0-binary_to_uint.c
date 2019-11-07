#include <stdio.h>

/**
 *_strlen -main entry.
 *void: nothing
 *@s: char pointer
 *Description: Function that returns the length of a string.
 * Return: void
 **/
unsigned int _strlen(const char *s)
{
	int c = 0;

	while (s[c] != '\0')
		/*\0 is the Null character */
	{
		c++;
	}
	return (c);
}

/**
 *_power -main entry.
 *void: nothing
 *@base: base
 *@exponent: exponent
 *Description: Function that returns the base elevated to the exponent
 * Return: void
 **/
int _power(int base, int exponent)
{
	int result = 1;

	for (; exponent > 0; exponent--)
	{
		result = result * base;
	}
	return (result);
}
/**
 *binary_to_uint -.
 *@b: binary number in char pointer
 *Description: Function receives binary in char and return decimmal
 * Return: unsigned integer
 **/

unsigned int binary_to_uint(const char *b)
{
	int len, c, pw, num = 0;

	unsigned int n;

	if (b == NULL)
		return (0);

	len =  _strlen(b);

	for (c = 0; b[c] != '\0'; c++, len--)
	{
		n = b[c] - '0';

		if ((n == 0) || (n == 1))
		{
			pw = _power(2, (len - 1));
			num = num + (n * pw);
		}
		else
			return (0);

	}
	return (num);
}
