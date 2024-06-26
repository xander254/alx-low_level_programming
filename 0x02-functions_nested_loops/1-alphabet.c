#include "main.h"

/**
 *main - the entry pint of my program
 *_putchar - print to the standard output
 *Return: 0
 *@a - charcter to be printed
 */

void print_alphabet(void)
{
	int a = 97;
	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
