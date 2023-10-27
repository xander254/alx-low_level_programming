#include <stdio.h>

/**
 * main - Entry point
 * Return:0
 */

int main(void)
{
	int a;
	char c;

	a = 0;
	c = 'a';

	while (a <= 9)
	{
		putchar(a + '0');
		a++;
	}
	while (c >= 'a' && c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
