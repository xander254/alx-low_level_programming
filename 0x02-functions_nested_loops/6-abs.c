#include "main.h"

/**
  * _abs - find the absolute value of an int
  * @r: integer to be checked
  * Return: 0
  */

int _abs(int r)
{
	if (r < 0)
	{
		r = (-1) * r;
		return (0);
		_putchar('\n');
	}
	else if (r == 1)
	{
		r = (-1) * r;
		return (1);
		_putchar('\n');
	}
	else
	{
		return (98);
	}
	return (0);
}
