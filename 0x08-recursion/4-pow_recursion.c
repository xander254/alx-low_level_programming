#include "main.h"


/**
  * _pow_recursion -function that returns value of x ^ to power of y.
  *@x: int to be used
  *@y: int to be used
  *Return: x raised to power of y
  *
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
