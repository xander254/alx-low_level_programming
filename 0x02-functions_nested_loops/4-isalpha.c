#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check if a character is alpha
 * Return: 1 if character is alpha else 0
 * @r: character to be checked
 */

int _isalpha(int r)
{
	if (isalpha(r))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


