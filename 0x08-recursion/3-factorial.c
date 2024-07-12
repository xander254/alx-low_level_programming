#include "main.h"
#include <stdio.h>


/**
  * factorial - fid factorial of a given number
  * @n: the number to be checked
  * Return: the factorial of n after the recursion
  */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
