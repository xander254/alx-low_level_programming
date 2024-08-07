#include "function_pointers.h"
#include <stddef.h>


/**
  * print_name - a function that prints a name
  * @name: the name to be printed
  * @f: a pointer to a function
  */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
	{
		(*f)(name);
	}
}
