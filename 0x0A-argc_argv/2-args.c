#include <stdio.h>
#include "holberton.h"
/**
 *main -main entry.
 *@argc:number of command line arguments
 *@argv: array containing the program command line arguments
 *Description:program that prints all arguments it receives.
 * Return:integer
 **/
int main(int argc, char *argv[])
{
	int c;

	for (c = 0; c < argc; c++)
	{
	printf("%s\n", argv[c]);
	}

	return (0);
}
