#include "main.h"
/**
 * _strspn - function that gets the length of a substring
 *
 * @s: the string to be searched
 *
 * @accept: the prefix to be measured
 *
 * Return: the number of bytes in s which only
 * consists of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
			{
				return (bytes);
			}
		}
			s++;
	}
		return (bytes);
}

