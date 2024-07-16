#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
  * countCoins - minimum number of coins to make an amount of money
  * @number: the number of cents to be given back.
  * Return: 0 if successful else return 1.
  */

void countCoins(int number)
{
	int count_25 = 0, count_10 = 0, count_5 = 0;
	int count_2 = 0, count_1 = 0;

	count_25 = number / 25;
	number = number % 25;

	count_10 = number / 10;
	number = number % 10;

	count_5 = number / 5;
	number = number % 5;

	count_2 = number / 2;
	number = number % 2;

	count_1 = number / 1;
	number = number % 1;

	printf("%d\n", count_25 + count_10 + count_5 + count_2 + count_1);
}

/**
  * main - Entry poit of our program
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 if successful else 1
  */

int main(int argc, char *argv[])
{
	int number;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);
	if (number < 0)
	{
		printf("0\n");
		return (0);
	}
	countCoins(number);
	return (0);
}



