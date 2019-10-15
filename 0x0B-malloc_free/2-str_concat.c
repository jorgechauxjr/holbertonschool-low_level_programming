#include <unistd.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings in one
 * @s1: pointer
 * @s2: pointer
 * Return: char pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int lg1, lg2, c1, c2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (lg1 = 0; s1[lg1] != '\0'; lg1++)
		;

	for (lg2 = 0; s2[lg2] != '\0'; lg2++)
		;
	concat = malloc((lg1 * sizeof(char)) + (lg2 * sizeof(char) + 1));

/*validating the return of malloc */
			if (concat != NULL)
			{
				for (c1 = 0; c1 < lg1; c1++)
				{
					concat[c1] = s1[c1];
				}
				for (c2 = 0; c2 < lg2; c2++, c1++)
				{
					concat[c1] = s2[c2];
				}
				concat[c1] = '\0';
				return (concat);
			}
			else
			{
				return (NULL);
			}
}
