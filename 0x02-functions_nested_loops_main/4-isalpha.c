#include "main.h"

/**
 * _isalpha - checks for alphabetic chars
 * @c: Char to be checked
 * Return: 1 for alphabetic character else 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
