#include "main.h"

/**
  * _memset - a function that fills memory with a constant byte
  * Return: pointer to memory s
  * @b: constant byte
  * @n: no of bytes
  * @s: parameter pointing to another parameter
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
