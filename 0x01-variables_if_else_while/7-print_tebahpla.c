#include <stdio.h>
/**
 * main - entry point
 * Description: print the alphabet in reverse.
 * Return: 0
 */
int main(void)
{
	char inicial = 'z';
	char a = 'a';

	while (inicial >= a)
	{
		putchar (inicial);
		inicial--;
	}
	putchar ('\n');

	return (0);
}
