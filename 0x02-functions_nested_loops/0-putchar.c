#include "main.h"

/**
 * _putchar - writes the character c to stdout
 *@c: is the var
 * Return: always zero
 */
int main(void)
{
	char x[8] = "_putchar";
	int i;

	for (i = 0; i <= 8; i++)
	{
		_putchar(x[i]);
	}
	return (0);
}
