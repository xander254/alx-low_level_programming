#include "main.h"


/**
  * _strlen_recursion - A function thst returns the lenght of a string
  * @s: the string to be checked
  * Return: 0 if s is Null else Return 1 added to the next character
  * in the srint
  */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
