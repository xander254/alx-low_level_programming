#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
  * positive_or_negative - find if an int is positive or negative
  * Return: always 0
  * @n: int to be checked
  */

void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;

	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
