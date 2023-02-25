#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if char is lowercase
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 'a' && c <= 'z')

		return (0);
	else
		return (1);
}
