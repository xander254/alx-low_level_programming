#include <stdio.h>

/**
  * main - the entry point of my algorithm
  * putchar - print values
  * Return: always 0
  */

int main(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
		if (x != 101 && x != 113)
		{
		putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
