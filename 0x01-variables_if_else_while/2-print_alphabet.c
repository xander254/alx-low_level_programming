#include <stdio.h>

/**
  * main - the entry point of my algorithm
  * putchar - print values
  * Return: always 0
  */

int main(void)
{
	char a = 97;
	char b = 122;

	while (a < b)
	{
		putchar('a');
		a++;
	}
	putchar('\n');
	return (0);
}
