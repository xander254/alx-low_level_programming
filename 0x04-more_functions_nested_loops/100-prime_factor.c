#include <stdio.h>

/**
  *primeFactors - find prime factors of n
  *main - the entry point of our program
  *Return: 0
  *@n: number to be used
  */

void primeFactors(long int n)
{
	int i;

	while (n % 2 == 0)
	{
		printf("%d ", 2);
		n = n / 2;
	}
	for (i = 3; i * i <= n; i = i + 2)
	{
		while (n % i == 0)
		{
			printf("%d ", i);
			n = n / i;
		}
	}
	printf("%ld ", n);
}

int main(void)
{
	long int n = 612852475143;

	primeFactors(n);
	return (0);
}

