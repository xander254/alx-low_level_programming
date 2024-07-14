#include <stdio.h>

/**
  * main -  print the number of arguments passed to a program
  * @argc: argument count
  * @argv: argument vectors
  * Return: 0 if  successfull, else 1
  */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
