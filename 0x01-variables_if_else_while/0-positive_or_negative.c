#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - the entry point of my algorithm
  * printf - print to the standard output
  * Return: always 0
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("Last digit of %d is positive\n", n);
	}
	else if (n == 0)
	{
		printf(" Last digit of %d is zero\n", n);
	}
	else
	{
		printf("Last digit of %d is negative\n", n);
	}
	return (0);
}
