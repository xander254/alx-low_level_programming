#include "main.h"
#include <stdio.h>


/**
  * more_numbers - print numbers from 0 to 14
  * Return: 0
  */

void more_numbers(void)
{
	int num;
	int i;

	for (num = 1; num <= 10; num++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
		_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
