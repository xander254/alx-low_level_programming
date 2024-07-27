#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>
/**
  *print_strings - a function that prints strings, followed by a
  * new line
  * @separator: string to be printed between the strings
  * @n: no of strings passed to a function
  * Return: formated string
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *ptr;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(args, char *);

		if (separator != NULL && i > 0)
		{
			printf("%s", separator);
		}
		if (ptr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", ptr);
		}
	}
	va_end(args);
	printf("\n");
}





