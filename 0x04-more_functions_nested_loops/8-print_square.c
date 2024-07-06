#include "main.h"

/**
  *print_square - takes values and prints a square
  *Return: 0
  *@size: - size of square
  */

void print_square(int size)
{
	int i, j;

	j = 0;

	if (size < 1)
	{
		_putchar('\n');
	}
	while (j < size)
	{
		i = 0;
		while (i < size)
		{
			_putchar('#');
			i++;
		}
		_putchar('\n');
		j++;
	}
}
