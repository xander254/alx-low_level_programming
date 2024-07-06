#include "main.h"
#include <ctype.h>

/**
  *cap_string - capitalize a string
  *Return: 0
  *@str: string
  */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(toupper(*str));
		i++;
	}
	putchar('\n');
	return (0);
}






