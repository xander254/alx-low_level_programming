#include "main.h"

/**
  *puts2 - print to std out
  *Return:0
  *@str: string to be used
  */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
