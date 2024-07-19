#include "main.h"
#include <stdlib.h>


/**
  * array_range - a function that creates an array of integers
  * @min: minimum
  * @max: maximum
  * Return: pointer to array else NULL
  */

int *array_range(int min, int max)
{
	int size;
	int i = 0;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
