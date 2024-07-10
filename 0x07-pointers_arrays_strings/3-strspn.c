#include "main.h"


/**
  * _strspn - gets the length of a prefix string
  * Return: number of bytes in the initial segment of s which
  * consist only of bytes from accept
  * @s: string
  * @accept: the bytes to be used
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int j, i;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found)
		{
			count++;
		}
		else
		{
			break;
		}
	}
	return (count);
}
