#include "main.h"

/**
  * print_line - print a line in the terminal
  * Return: 0
  * @n: numbers of times _ is to be printed
  */

void print_line(int n)
{
	char a = 95;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(a);
	}
	_putchar('\n');
}
