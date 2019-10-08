#include <stdio.h>
#include "holberton.h"
/**
 *print_chessboard -main entry.
 *@a:char pointer
 *Description:function that prints the chessboard.
 * Return:void
 **/
void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; x < 8 ; x++)
	{
		for (y = 0; y < 8; y++)
		{
			_putchar(a[x][y]);
		}
		_putchar ('\n');
	}
}
