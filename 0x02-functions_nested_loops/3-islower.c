#include "main.h"

/**
 * _islower - Checks fro lowercase chars
 * @c: char to be checked
 * Return: 1 if @c is lower else 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
