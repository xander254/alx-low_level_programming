#include "main.h"

/**
  *_puts - print a strng to stdout
  *Retun: 0
  *@str: - the string to be printed
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(str);
		str++;
	}
	putchar('\n');
}

