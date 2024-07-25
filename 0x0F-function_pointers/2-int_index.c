#include "function_pointers.h"


/**
  * int_index -  a function that searches for an integer.
  * @array: the array with different values to be checked
  * @cmp: the function that compares of the ints are ok
  * @size: the size of the array mentioned
  * Return: index or -1
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	while (index < size)
	{
		if (cmp(array[index]) != 0)
		{
			return (index);
		}
		index++;
	}
	return (-1);
}
