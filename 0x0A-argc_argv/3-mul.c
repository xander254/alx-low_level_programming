#include <stdio.h>
#include <stdlib.h>

/**
  * main - multiplies two numbers
  * @argc:  argument count
  * @argv: argument vectors
  * Return: 0 if successful else 1
  */

int main(int argc, char *argv[])
{
	int first, second, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	first = atoi(argv[1]);
	second = atoi(argv[2]);
	mul = first * second;

	printf("%d\n", mul);
	return (0);
}


