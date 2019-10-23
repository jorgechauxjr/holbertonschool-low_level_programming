#include <stdio.h>
/**
 *print_name -main entry.
 *@name:char pointer
 *@f: oiubter to a function
 *Description:Function that prints a string in reverse.
 * Return:void
 **/
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
