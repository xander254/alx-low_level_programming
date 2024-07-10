#include "main.h"
#include <stdio.h>

/**
  * print_chessboard - prit the chess board
  * Return:0
  * @a: number of rows to be printed
  */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
