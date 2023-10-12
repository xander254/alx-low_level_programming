#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int lowerCase = 'a';
	int upperCase = 'A';

	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase++;
	}
	while (upperCase <= 'Z')
	{
		putchar(upperCase);
		upperCase++;
	}
	putchar('\n');
	return (0);
}
