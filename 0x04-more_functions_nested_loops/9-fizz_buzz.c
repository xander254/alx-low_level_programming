#include "main.h"

/**
  *main -the entry point of our program
  *print 0 -100 if multiples of three print Fizz else print Buzz.
  *For multiples of both three and five print FizzBuzz.
  *Return: 0
  *
  */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ", i);
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ", i);
		}
		else if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz ", i);
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
