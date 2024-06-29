#include "main.h"
#include <stdio.h>


/**
  * more_numbers - print numbers from 0 to 14
  * Return: 0
  */

void more_numbers(void)
{
	int a;
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		a = 0;
		while (a <= 13)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
	}
}
