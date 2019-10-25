#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all -main entry.
 * @n: Constant unsigned integer
 * Return: int sum of all parameters
 **/
int sum_them_all(const unsigned int n, ...)
{
	va_list my_list;
	unsigned int c;
	int sum;

	if (n == 0)
		return (0);

	va_start(my_list, n); /*Initialize the argument list*/

	sum = 0;

	for (c = 0; c < n; c++)
		sum += va_arg(my_list, int); /*Get the next argument value*/

	va_end(my_list); /*Clean up*/

	return (sum);

	}
