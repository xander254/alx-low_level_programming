#include "main.h"

/**
 *print_alphabet_x10 - print a..z x 10
 *_putchar - print characters to std output
 *Return: 0
 */

void print_alphabet_x10(void)
{
	int alpha = 97;
	int n;

	for (n = 0; n <= 9; n++)
	{
		for (alpha = 97; alpha <= 122; alpha++)
		{
		_putchar(alpha);
		}
	_putchar('\n');
	}
}
