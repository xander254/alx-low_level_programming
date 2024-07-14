#include <stdio.h>

/**
  * main - print all the arguments the program recieves
  * @argc: argument count
  * @argv: argument vectrors
  * Return: 0 if successfull, else 1
  */

int main(int argc, char *argv[])
{
	int n = argc;

	for (n = 0; n <= argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}

