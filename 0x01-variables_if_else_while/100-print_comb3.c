#include <stdio.h>

/**
 * main -entry point
 * Return: 0
 */

int main(void)
{
	int o = '0';

	while (o <= '9')
	{
		putchar(o);
		if (o != '9')
		{
			putchar(',');
			putchar(' ');
		}
		o++;
	}
	putchar('\n');
	return (0);
}
