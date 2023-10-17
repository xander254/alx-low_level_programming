#include  "main.h"

/**
 * print_alphabet_x10 - print alphabet ten times
 *
 * Return: void
 */

void print_alphabet_x10(void);
{
	char c;
	int a = 0;

	while (a <= 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
	a++;
}
