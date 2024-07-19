#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
  * mul - a function that multiplies two numbers
  * @num1: the first number
  * @num2: the second number
  * Return: res else 1
  */

int mul(int num1, int num2)
{
	int res;

	res = (num1 * num2);
	return (res);
}

/**
  * main - entry point of our program
  * @argc: argument counter
  * @argv: argument vector
  * Return: 0 else 1
  */

int main(int argc, char *argv[])
{
	int result;
	int nm1, nm2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	nm1 = atoi(argv[1]);
	nm2 = atoi(argv[2]);
	result = mul(nm1, nm2);
	printf("%d\n", result);
	return (0);
}
