#include "main.h"
#include <stdlib.h>

/**
  * binary_to_uint - a function that converts a binary number to an
  * unsigned int
  * @b: a string pointing to 0 and 1 chars
  * Return: converted number or 0 if NULL/ no more chars
  */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int result = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		result = result << 1;
		if (b[i] == '1')
		{
			result = result + 1;
		}
		i = i + 1;
	}
	return (result);
}
