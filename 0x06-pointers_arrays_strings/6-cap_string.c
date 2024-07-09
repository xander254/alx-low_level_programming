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

	if (str == NULL)
	{
		return NULL;
	}

	if (isalpha((unsigned char)str[i]))
	{
		str[i] = toupper((unsigned char)str[i]);
	}
	while (str[i] != '\0')
	{
		if ((str[i] == ',' || str[i] == ' ' || str[i] == '.' || str[i] == ';' || str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}') && isalpha((unsigned char)str[i + 1]))
		{
			str[i + 1] = toupper((unsigned char)str[i + 1]);
		}
		i++;
	}
	return (str);
}






