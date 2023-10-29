#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int lowerCase = 'a';

	while (lowerCase <= 'z')
	{
		if (lowerCase == 'e' || lowerCase == 'q')
		{
			lowerCase++;
		}
		else
		{
		putchar(lowerCase);
		lowerCase++;
		}
	}
	putchar('\n');
	return (0);
}
