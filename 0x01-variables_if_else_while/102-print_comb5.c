#include <stdio.h>

/**
  *main - entry point of our program
  *Return:0
  *
  */
int main(void)
{
	int a, b, c, d;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b<= 57; b++)
		{
			putchar(a);
			putchar(b);
			putchar(' ');
			for (c = 48; c <= 57; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					putchar(c);
					putchar(d);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
