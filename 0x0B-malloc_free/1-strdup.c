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
	int x, lg;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (lg = 0; str[lg] != '\0'; lg++)
		{
		}
		cpstr = malloc(lg * sizeof(*str) + 1);
		if (cpstr != NULL)
		{
			for (x = 0; x < lg; x++)
			{
				cpstr[x] = str[x];
			}
			cpstr[lg] = '\0';
			return (cpstr);
		}
		else
		{
			return (NULL);
		}
	}
}
