#include "main.h"

/**
  *puts2 - print to std out
  *Return:0
  *@str: string to be used
  */
void puts2(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
