#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings -function that prints strings
 * @separator: Constant pointer to char
 * @n: constant unsigned int
 * Return: void
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list my_list;
	unsigned int c;
	char *word;

	if (separator == NULL)
		return;

	va_start(my_list, n); /*Initialize the argument list*/

	for (c = 0; c < n; c++)
	{
		word = va_arg(my_list, char *); /*  get the next argument value */

		if (word == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", word);
		}
		if (c < n - 1 && my_list != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(my_list); /*Clean up*/

	}
