#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * positive_or_negative - find if an int is positive or negative
  * Return: always 0
  * @n: int to be checked
  */

void positive_or_negative(int n)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
}
