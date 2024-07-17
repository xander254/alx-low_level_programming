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
	unsigned int length1 = 0;
	unsigned int length2 = 0;


	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length1] != '\0')
	{
		length1++;
	}
	str2 = (char *)malloc((length1 + 1) * sizeof(char));
	if (str2 == NULL)
	{
		return (NULL);
	}
	while (length2 < length1)
	{
		str2[length2] = str[length2];
		length2++;
	}
	str2[length2] = '\0';
	return (str2);
}



