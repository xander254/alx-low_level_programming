#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number defining the size of the times table
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;
	int product;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;

			if (j == 0)
			{
				printf("%d", product);
			}
			else
			{
				printf(", %4d", product);
			}
		}
		printf("\n");
	}
}
