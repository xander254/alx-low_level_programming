#include <stdio.h>
#include <ctype.h>

/**
 *  main - Entry point
 *  Return: 0
 */

int main(void)
{
	int lowerCase = 'z';

	while (lowerCase >= 'a')
	{
		putchar(lowerCase);
		lowerCase--;
	}
	putchar('\n');
	return (0);
}
