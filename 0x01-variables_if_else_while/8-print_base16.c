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
	c = 'f';

	while (a <= 9)
	{
		putchar(a + '0');
		a++;
	}
	while (c <= 'f' && c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
