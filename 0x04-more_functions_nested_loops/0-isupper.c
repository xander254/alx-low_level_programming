#include "main.h"

/**
  *_isupper - check if characters are uppercase
  *_Putchar - put a character
  *Return: 1 if upper else 0
  *@c: character to be checked
  */

int _isupper(int character)
{
	if (isupper(character))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
