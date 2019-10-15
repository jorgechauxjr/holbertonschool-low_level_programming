#include <unistd.h>
#include <stdlib.h>

/**
 * create_array - Main entry
 * @c: The character to print
 *@size: unsigned integer
 * Return: char.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		p = malloc(size * sizeof(c));

		if (p != NULL)
		{
		for (x = 0; x < size; x++)
		{
			p[x] = c;
/*  *(p+x)=c     p[x]=c  */
		}
		}
		else
		{
			return (NULL);
		}

		return (p);
	}
}
