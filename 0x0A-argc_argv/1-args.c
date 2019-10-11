#include <stdio.h>
#include "holberton.h"
/**
 *main -main entry.
 *@argc:number of command line arguments
 *@argv: array containing the program command line arguments
 *Description:program that prints the number of arguments passed into it.
 * Return:integer
 **/
int main(int argc, char *argv[])
{

	(void) argv;
	printf("%d\n", argc - 1);

	return (0);

}
