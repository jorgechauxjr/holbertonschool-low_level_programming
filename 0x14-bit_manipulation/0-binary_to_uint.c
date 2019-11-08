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
	int c;

	for (c = 0; s[c] != '\0'; c++) /*\0 is the Null character */
		;
	return (c);
}
/**
 *_power -main entry.
 *void: nothing
 *@base: base
 *@exponent: exponent
 *Description: Function that returns the base elevated to the exponent
 * Return: result of operation
 **/
int _power(int base, int exponent)
{
	int result = 1;

	for (; exponent > 0; exponent--)
       		result = result * base;

	return (result);
}
/**
 *binary_to_uint -.
 *@b: binary number in char pointer
 *Description: Function receives binary in char and return decimmal
 * Return: unsigned integer
 **/
unsigned int binary_to_uint(const char *b)
{   /*c = counter pw = power  num=save the decimal*/
	int len, c, pw, num = 0;
	unsigned int n; /* n=number*/

	if (b == NULL) /*validate that the string of chars is not null*/
		return (0);

	len =  _strlen(b); /*invoke function to capture the length*/

	for (c = 0; b[c] != '\0'; c++, len--) /*go through the string of chars*/
	{
/*The binary num is as char, so n=b[c]-'0' capture it as unsigned int */
		n = b[c] - '0';

		if ((n == 0) || (n == 1))/*validate it us a binary number*/
		{
/*len -1 beacuse from rigth to left it start from zero*/
/*to calculate bin to decim from rigth to left is: 2^0*bin+2^2*bin+2^3*bin... */
			pw = _power(2, (len - 1));
/*the sum of the powers is the number in decimal*/
			num = num + (n * pw);
		}
		else
			return (0);
	}
	return (num);
}
