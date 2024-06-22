#include <stdio.h>

/**
  *main - entry point
  *putchar - print to std o
  *Return: 0
  */

int main(void)
{
	int a;

	for (a = 48; a <= 56;)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar(57);
	putchar('\n');
	return (0);
}
