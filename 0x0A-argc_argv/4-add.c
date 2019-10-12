#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 *isChar -main entry.
 *@p:pointer
 *Description:function to see if its a char
 * Return:0 if its a char or 1 otherwise
 **/
int isChar(char *p)
{
	int n;

 	while (*p != '\0')
	{
		n = *p;
/*si es numero, mire la sig posicion*/
/*si no es numero ischar es true devuelve 0 */
		if (n > 47 && n < 58)
		{
			p++;
		}
		else
		{
			return (0);
		}
	}
/*si es numero, ischar no se cumple, devuelve 1*/
	return (1);
}

#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 *main -main entry.
 *@argc:number of command line arguments
 *@argv: array containing the program command line arguments
 *Description:program that multiplies two numbers.
 * Return:integer
 **/
int main(int argc, char *argv[])
{
	int c, c2;
	int s = 0;

	(void)argc;

	if (argc == 1)
	{
		printf("%d\n", s);
	}
	else
	{
		for (c = 1; c < argc; c++)
		{
			if (isChar(argv[c]) == 0)
			{
				printf("Error\n");
				return (0);
			}
		}
		for (c2 = 1; c2 < argc; c2++)
			s += atoi(argv[c2]);

			printf("%d\n", s);
	}
	return (0);
}
