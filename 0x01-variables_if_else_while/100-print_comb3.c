#include <stdio.h>

/**
  *main - entry point
  *putchar - print to std o
  *Return: 0
  */

int main(void)
{
	int a, b;

	for (a = 48; a <= 57; a++)
	{
		for (b = a + 1; b <= 57; b++)
		{
			putchar(a);
			putchar(b);
			if (a != 56 || b != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}

	}
	putchar('\n');
	return (0);
}
