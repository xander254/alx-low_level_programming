#include "main.h"
/**
 * _strchr - locates a character in a string
 *
 * @s: the string to be searched
 *
 * @c: the character to be located
 *
 * Return: a pointer to the first occurrence if c is found
 * if c is not found- null
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}

