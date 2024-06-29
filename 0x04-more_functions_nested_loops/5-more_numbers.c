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

	for (num = 0; num <= 14; num++)
	{
		for (i = 0; i < 10; i++)
		{
			_putchar('0' + num);
		}
	}
	_putchar('\n');
}
