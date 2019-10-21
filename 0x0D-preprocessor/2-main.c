#include <stdio.h>

/**
 *main -main entry
 *Description: Program that prints the name of the file
 * it was compiled from
 *Return: void
 **/

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
