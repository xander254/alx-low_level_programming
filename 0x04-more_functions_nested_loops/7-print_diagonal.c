#include "main.h"

/**
  *print_diagonal - print a dialogue
  *Return: 0
  *@n: number of diagonals
  */

void print_diagonal(int n)
{
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int k;

		for (j = 0; j < n; j++)
		{
			for (k = 0; k < n; k++)
			{
				if (k == j)
				{
					_putchar('\\');
				}
				else if (k < j)
				{
					_putchar(' ');
				}
			}
			 _putchar('\n');

		}
	}
}
