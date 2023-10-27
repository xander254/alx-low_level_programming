#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	char c;

	c = 48;

	while (c <= 57)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
