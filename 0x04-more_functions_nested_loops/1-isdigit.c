#include "main.h"

/**
  * _isdigit - check if a character is digit or not
  * Return: 1 if digit else 0
  * @c: character to be checked
  */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
