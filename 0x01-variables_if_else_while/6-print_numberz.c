#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int c;

	c = 0;

	while (c <= 9)
	{
		putchar(c + '0');
		c++;
	}
	putchar('\n');
	return (0);
}
