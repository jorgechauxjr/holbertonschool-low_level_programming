#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * _printchar -function that prints char.
 *Description: prints char
 * @list: va_list
 * @sep: char pointer
 * Return: void
 **/
void _printchar(va_list list, char *sep)
{
	printf("%s%c", sep, va_arg(list, int));
}
/**
 * _printint -function that prints int.
 * @list: va_list
 * @sep: char pointer
 * Return: void
 **/
void _printint(va_list list, char *sep)
{
	printf("%s%d", sep, va_arg(list, int));
}


/**
 * _printfloat -function that prints float.
 *Description: Prints float
 * @list: va_list
 * @sep: char pointer
 * Return: void
 **/
void _printfloat(va_list list, char *sep)
{
	printf("%s%f", sep, va_arg(list, double));
}
/**
 * _printstring -function that prints string.
 * @list: va_list
 * @sep: char pointer
 * Return: void
 **/
void _printstring(va_list list, char *sep)
{
	char *s;

s = va_arg(list, char *);
	if (s == NULL)
		s = "(nil)";

	printf("%s%s", sep, s);
}

/**
 * print_all -function that prints anything.
 * @format: list of types of arguments passed to the function
 * Return: void
 **/
void print_all(const char * const format, ...)
{
	int c = 0, c2;
	va_list my_list;
	char *sep = "";

	get_format arr_fmt[] = {
		{"c", _printchar},
		{"f", _printfloat},
		{"s", _printstring},
		{"i", _printint},
		{NULL, NULL}
	};
	va_start(my_list, format); /*Initialize the argument list*/

	while (format != NULL && format[c] != '\0')
	{
		c2 = 0;
		while (c2 < 4)
		{
			if (format[c] == *(arr_fmt[c2].p_type)
				{
					arr_fmt[c2].func(my_list, sep);
					sep = ", ";
				}
				c2++;
		}
		c++;
	}
	printf("\n");
	va_end(my_list);
}
