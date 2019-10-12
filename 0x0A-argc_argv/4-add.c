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
	int c;
	int s = 0;

	(void)argc;

	if (argc == 1)
	{
		printf("%d\n", s);
	}
	else
	{
	for (c = 1; c < argc; c++)
		s += atoi(argv[c]);

	printf("%d\n", s);
	}
	return (0);
}
