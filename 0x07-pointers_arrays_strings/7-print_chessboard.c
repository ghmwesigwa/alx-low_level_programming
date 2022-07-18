#include "main.h"

/**
* print_chessboard - print chessboard given set 2D array
* @a: 2D array
* Return: nothing
*/

void print_chessboard(char (*a)[8])
{
	int i,j;

	for (i = 0; i < 8; i++)
	{
		j = 0;
		while (j < 8)
		{
			putchar(a[i][j]);
			j++;
		}
		putchar('\n');
	}
}
