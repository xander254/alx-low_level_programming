#include "main.h"


/**
  * _strcat - a function that concatenates two strings
  * @src: source string
  * @dest: destination string
  * Return: dest string @dest
  */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] !=  '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
