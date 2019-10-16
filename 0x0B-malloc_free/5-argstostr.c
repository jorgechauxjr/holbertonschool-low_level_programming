#include <unistd.h>
#include <stdlib.h>

/**
 * argstostr - Main entry
 *@ac: int
 *@av: int
 * Return: char pointer
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int c, c2, c3 = 0;

	if ((ac == 0) || (av == NULL))
		return (NULL);

	for (c = 0; c < ac; c++)
	{
		for (c2 = 0; c2 < ac; c2++, c3++)
		{
			p[c3] = av[c][c2];
		}
	}
	return (p);

}
