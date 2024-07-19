#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
  * _calloc -a function that allocates memory to an array using malloc
  * @nmemb: number on ellements in an array (maybe nmembers || !)
  * @size: the size of bytes that will be allocated
  * Return: a pointer to the allocated memory
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	memset(arr, 0, nmemb * size);
	return (arr);
}

