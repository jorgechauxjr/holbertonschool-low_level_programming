#include "holberton.h"
/**
 *rev_string -main entry.
 *void: nothing
 *@s: char pointer
 *Description: function prints string in reverse followed by a new line.
 * Return: void
 **/
void rev_string(char *s)
{
	int lenght = 0;
	int i;
	char ch;

	while (s[lenght] != '\0')
		lenght++;
/* lenght-- es para que no tome el ultimo espacio que es vacío*/

	for (lenght--, i = 0; i <= lenght; lenght--, i++)
	{
		ch = s[i];
		s[i] = s[lenght];
		s[lenght] = ch;
	}
}
