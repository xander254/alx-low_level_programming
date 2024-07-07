#include "main.h"
#include <string.h>

/**
  * puts_half -  a function that prints half a string
  * @str: string to be used
  * return: void
  */

void puts_half(char *str)
{
	int n = 0;
	int length_of_the_string = strlen(str);
	int i = 0;

	if (length_of_the_string % 2 == 0)
	{
		n = length_of_the_string / 2;
	}
	else
	{
		n = (length_of_the_string - 1) / 2 + 1;
	}
	for (i = n; i < length_of_the_string; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
