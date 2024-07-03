#include "main.h"

/**
  *print_last_digit - print last digit of a no
  *Return: 0
  *@r: - number
  */

int print_last_digit(int r)
{
	int last;

	last = r % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
