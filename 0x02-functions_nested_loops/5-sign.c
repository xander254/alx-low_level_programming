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
		_putchar(43);
		return (1);
	}
	else if (r == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}

