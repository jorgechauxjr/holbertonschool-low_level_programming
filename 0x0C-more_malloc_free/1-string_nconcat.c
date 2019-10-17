#include <unistd.h>
#include <stdlib.h>
/**
 * _copystring - Main entry
 *@orig: pointer
 *@size: unsigned integer
 *Description: function that copies a string
 * Return:char pointer
 */


char *_copystring(char *orig, unsigned int size)
{
	char *cp;
	int c;

	cp = malloc(sizeof(char) * size);

	for (c = 0; orig[c] != '\0'; c++)
		cp[c] = orig[c];

	return (cp);
}

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
	unsigned int c1, c2, c3;
	char *pconcat;

	for (c1 = 0; s1[c1] != '\0'; c1++)
		;

	for (c2 = 0; s2[c2] != '\0'; c2++)
		;
	if (n >= c2)
	{
		pconcat = malloc(sizeof(char) * c1 + sizeof(char) * c2);

		if (pconcat == NULL)
			return (NULL);

			pconcat = _copystring(s1, c1);

		for (c3 = 0; s2[c3] != '\0'; c3++)
			pconcat[c1] = s2[c3];

		return (pconcat);
	}
	pconcat = malloc(sizeof(char) * c1 + sizeof(char) * c2);

	if (pconcat == NULL)
		return (NULL);

		pconcat = _copystring(s1, c1);

		for (c3 = 0; c3 < n; c3++)
			pconcat[c1] = s2[c3];

		return (pconcat);
}
