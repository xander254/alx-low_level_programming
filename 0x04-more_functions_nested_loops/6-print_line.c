#include "main.h"

/**
  * print_line - print a line in the terminal
  * Return: 0
  * @n: numbers of times _ is to be printed
  */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
