#include <stdio.h>

/**
  *main - entry point
  *putchar - print characters to std output in c
  *Return: 0
  */

int main(void)
{
	char a;

	for (a = 122; a >= 97; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
