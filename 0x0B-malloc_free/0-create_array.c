#include "main.h"
#include <stdlib.h>


/**
  * create_array -  create an array of characters
  * @c: character array
  * @size: the size of the array to be allocated
  * Return: pointer to the created array or NULL if it fails
  */

char *create_array(unsigned int size, char c)
{
	unsigned int index;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}
	for (index = 0; index < size; index++)
	{
		array[index] = c;
	}
	return (array);
}
