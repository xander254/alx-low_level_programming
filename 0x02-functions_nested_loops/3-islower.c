#include "main.h"
#include <ctype.h>

/**
 *_islower - check if a character is lower
 *@r - char to be checked
 *Return: 1 if lowercase else 0
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
