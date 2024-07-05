#include "main.h"

/**
  *print_diagonal - print a dialogue
  *Return: 0
  *@n: number of diagonals
  */

void print_diagonal(int n)
{
	int j;

	if (n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			_putchar(92);
		}
		_putchar('\n');
	}
}
