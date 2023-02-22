#include "main.h"

/**
 * main- writes the character c to stdout
 * Return: always zero
 */
int main(void)
{
	char x[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(x[i]);
	}
	_putchar('\n');
	return (0);
}
