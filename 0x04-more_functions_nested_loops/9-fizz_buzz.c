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
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d", i);
			if (i != 100)
			{
			printf(" ");
			}
		}
	}
	printf("\n");

	return (0);
}
