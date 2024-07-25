#include "function_pointers.h"
#include <stddef.h>

/**
  * array_iterator -a function that executes a function given as a
  * parameter on each element of an array
  * @size: size of the array
  * @action: a  function pointer to be used
  * @array: the pointer to the array we are working with
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (index = 0; index < size; index++)
	{
		action(array[index]);
	}
}

