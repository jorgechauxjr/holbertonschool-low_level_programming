#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers -function that prints numbers
 * @separator: Constant pointer to char
 * @n: constant unsigned int
 * Return: void
 **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list my_list;
	unsigned int c;
	int num;

	if (separator == NULL)
		return;

	va_start(my_list, n); /*Initialize the argument list*/

	for (c = 0; c < n; c++)
	{
		num = va_arg(my_list, int); /*  get the next argument value */
		printf("%d", num);

		if (c < n - 1 && my_list != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(my_list); /*Clean up*/

	}
