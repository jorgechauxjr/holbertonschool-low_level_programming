#include <unistd.h>
#include <stdlib.h>
/**
 * string_nconcat - Main entry
 *@s1: pointer
 *@s2: pointer
 *@n: unsigned int
 *Description:function that concatenates two strings
 * Return:char pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int c1, c2, c3, c4;
	char *pconcat;

/*c1 y c2 are lenght of s1 and s2*/

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (c1 = 0; s1[c1] != '\0'; c1++)
		;

	for (c2 = 0; s2[c2] != '\0'; c2++)
		;

	if (n >= c2)
		n = c2;

	pconcat = malloc(sizeof(char) * (c1 + n) + 1);

	if (pconcat != NULL)
	{
/* c3 counter acumulated, c4 para recorrer s1 desde cero*/
		for (c3 = 0; s1[c3] != '\0'; c3++)
			pconcat[c3] = s1[c3];

		for (c4 = 0; s2[c4] != '\0'; c4++)
		{
		pconcat[c3] = s2[c4];
		c3++;
		}

		pconcat[c3] = '\0';

		return (pconcat);
	}
	else
	{
		return (NULL);
	}
}
