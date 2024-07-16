#include "main.h"
#include "stdlib.h"

/**
  * _strdup - a function that returns a pointer to a newly allocated
  * space.
  * @str: the string we are dealing with
  * Return: a pointer to duplicate str else NULL
  */

char *_strdup(char *str)
{
	char *str2;
	unsigned int length1;
	unsigned int length2;


	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length1] != '\0')
	{
		str2 = malloc((length1 + 1) * sizeof(char));
		length1++;
	}
	if (str2 == NULL)
	{
		return (NULL);
	}
	for (length2 = 0; length2 < length1; length2++)
	{
		str2[length2] = str[length1];
	}
	return (str2);
}



