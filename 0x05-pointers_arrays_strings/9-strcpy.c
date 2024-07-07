#include "main.h"


/**
  * _strcpy - A function to copy a string. similiar to strcpy in stdio
  * Retrun: *dest
  * 
  */

char *_strcpy(char *dest, char *src)
{
	int i;
	int cp_chars = 0;

	for (i = 0; i < cp_chars && src[i] == '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < cp_chars)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
