#include "main.h"

/**
  *_puts - print a strng to stdout
  *Retun: 0
  *
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}

