#include "main.h"

/**
 * _isalpha - check if char is uppercase
 * @c: cahr to be checked
 * Return: 1 if upper else 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
