#include "main.h"

/**
  *print_square - takes values and prints a square
  *Return: 0
  *@size: - size of square
  */

void print_square(int size)
{
	int i, j;

	if (size < 0)
	{
		_putchar('\n');
	}
	else 
	{
		for (i = 0; i <= size; i++)
		{
			for (j = 0; j <= size; j++)
			{
				_putchar(35);
			}
		}
	}
	_putchar('\n');
}
