#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;
	int a;

	a = 0;

	while (a <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	a++;
	_putchar('\n');
	}
}

