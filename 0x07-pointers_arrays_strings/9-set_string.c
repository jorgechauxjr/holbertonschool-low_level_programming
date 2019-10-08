#include <stdio.h>
#include "holberton.h"
/**
 *set_string -main entry.
 *@s:char double pointer
 *@to: char variable
 *Description:function that sets the value of a pointer to a char.
 * Return:void
 **/
void set_string(char **s, char *to)
{
	*s = to;
}
