#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

/**
  * main - minimum number of coins to make an amount of money
  * @argc: argument count
  * @argv: argument vector
  * Return: 0 if successful else return 1.
  */

int main(int argc, char *argv[])
{
	int number;
	int count;

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
	count = number % 10;
	printf("%d\n", count);
	return (0);
}



