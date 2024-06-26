#include "main.h"
#include "stdio.h"

/**
 * print_sign - print the sign of a number
 * Return: 1 if > 0 else if < 0 return 0 else return -1
 * @r: character to be checked
 */

int print_sign(int r)
{
	if (r > 0)
	{
		_putchar('+');
		_putchar(',');
		_putchar(' ');
		return (1);
		_putchar('\n');
		if ((r = 0))
		{
			_putchar('0');
			_putchar(',');
			_putchar(' ');
			return (0);
			_putchar('\n');
		}
		else
		{
			_putchar('-');
			_putchar(',');
			_putchar(' ');
			return (-1);
			_putchar('\n');
		}
	}
}


