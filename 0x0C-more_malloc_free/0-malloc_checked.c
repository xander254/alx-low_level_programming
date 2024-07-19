#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - a function that allocates memory using malloc
  * @b: size of memory to be allocated
  * Return: a pointer to an allocated memory
  */

void *malloc_checked(unsigned int b)
{
	void *integer;
	
	integer = malloc(b);

	if (integer == NULL)
	{
		exit(98);
	}
	
	return (integer);
}
