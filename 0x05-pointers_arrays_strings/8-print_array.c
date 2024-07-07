#include "main.h"

/**
  * print_array - print an array of elements
  * Return: 0
  * @n: number of elements in an array
  * @a: the array we are dealing with
  */

void print_array(int *a, int n)
{
	int elements;

	for (elements = 0; elements < n; elements++)
	{
		printf("%d", a[elements]);
		if (elements != (n - 1))
		{
			printf(", ");
		}

	}
	printf("\n");
}

