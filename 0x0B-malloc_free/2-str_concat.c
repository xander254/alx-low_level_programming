#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * str_concat - a function that concatenates two strings
  * @s1: string1
  * @s2: string2
  * Return: pointer of concatenate strings else NULL
  */

char *str_concat(char *s1, char *s2)
{
	unsigned int length1;
	unsigned int length2;
	char *s3;
	unsigned int index;
	unsigned int index2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	length1 = strlen(s1);
	length2 = strlen(s2);

	s3 = malloc(sizeof(char) * (length1 + length2 + 2));

	if (s3 == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < length1; index++)
	{
		s3[index] = s1[index];
	}
	for (index2 = 0; index2 <= length2; index2++)
	{
		s3[index + index2] = s2[index2];
	}
	s3[length1 + length2] = '\0';
	return (s3);
}
