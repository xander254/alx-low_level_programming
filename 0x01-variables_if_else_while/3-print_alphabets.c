#include <stdio.h>

/**
  * main - the entry point of my algorithm
  * putchar - print values
  * Return: always 0
  */

int main(void)
{
	int x;
	int y;

	for (x = 97; x <= 122; x++)
	{
		putchar(x);
	}
	for (y = 65; y <= 90; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
