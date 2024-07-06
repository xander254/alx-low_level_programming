#include "main.h"
#include <ctype.h>

/**
  *string_toupper - a function that changes all letters to uppercase
  *Return: 0
  *
  */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if ((str[i]) != '\0')
		{
		putchar(toupper(str[i]));
		i++;
		}
	}
	return (0);
}
