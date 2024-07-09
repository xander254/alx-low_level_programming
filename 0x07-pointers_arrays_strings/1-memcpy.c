#include "main.h"

/**
  * _memcpy - a function that cpies a memory area
  * @n: no of bytes to be copied
  * @src: - source memory area
  * @dest: - destination memory area
  * Return: dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i = i + 1;
	}
	return (dest);
}

