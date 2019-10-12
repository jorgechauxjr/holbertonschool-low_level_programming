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
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
