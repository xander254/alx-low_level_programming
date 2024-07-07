#include "main.h"

/**
  *swap_int - swap two integers values
  *Return: 0
  *@a: param to be swapped
  *@b: param to be switched
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
