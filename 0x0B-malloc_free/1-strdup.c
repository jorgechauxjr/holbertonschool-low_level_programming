#include <unistd.h>
#include <stdlib.h>

/**
 * _strdup - Main entry
 * @str: pointer
 * Return: char pointer
 */
char *_strdup(char *str)
{
	char *cpstr;
	int x;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		cpstr = malloc(sizeof(str));
		if (cpstr != NULL)
		{
			for (x = 0; str[x] != '\0'; x++)
			{
				cpstr[x] = str[x];
			}
			return (cpstr);
		}
		else
		{
			return (NULL);
		}
	}
	return (NULL);
}
