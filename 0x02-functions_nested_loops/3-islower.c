#include "main.h"
#include <ctype.h>

/**
 *_islower - check if a character is lower
 *Return: 1 if lowercase else 0
 *@r: character to be checked if upper or lower
 */

int _islower(int r)
{
	if (islower(r))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
