#include <stdio.h>

/**
  *main - entry point
  *putchar - print to std o
  *Return: 0
  */

int main(void)
{
	int a;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
		if (a < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
