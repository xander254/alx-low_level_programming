#include "main.h"
#include <stdio.h>

/**
  * _strchr - a function that locates aa character ina  string
  * Return: a pointer to the first occurrence of c in string s,
  * or NULL if the character is not found
  * @c: character to be looked for
  * @s: the string
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
