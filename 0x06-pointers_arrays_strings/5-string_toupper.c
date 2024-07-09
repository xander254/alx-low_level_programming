#include "main.h"
#include <ctype.h>

/**
  *string_toupper - a function that changes all letters to uppercase
  *Return: 0
  *@str: - string
  */
char *string_toupper(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		str[i] = toupper((unsigned char)str[i]);
		i++;
	}
	return (str);
}
