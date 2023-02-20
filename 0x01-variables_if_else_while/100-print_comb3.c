#include <stdio.h>

/**
 * main - prints all single digit numbers of base
 * 10 starting from 0, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int x;

	for (n = '0'; n <= '9'; n++)
	{
		for (x = '0'; x <= '9'; x++)
		{
			putchar(n);
			putchar(x);
			if (x < '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
