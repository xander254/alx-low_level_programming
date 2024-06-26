#include "main.h"

/**
 *print_alphabet - print the alphabet
 *_putchar - print to std output
 *Return: 0
 *@a - charcter to be printed
 */

void print_alphabet(void)
{
	int a = 97;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
