#include "search_algos.h"

/**
  * linear_search - entry point
  * Return: the searched object
  * @value: the value we are searching
  * @array: the array we shall be traversing
  * @size: the size of the array
  */
int linear_search(int *array, size_t size, int value)
{
size_t i = 0;

if (array == NULL)
{
	return (-1);
}

for (i = 0; i < size; i++)
{
	if (array[i] == value)
	{
		return (i);
	}
}
	return (-1);
}
