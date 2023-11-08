#include "main.h"

/**
 * swap_int - swap values of 2 ints
 * @a: the value to be swapped with the adress of b
 * @b: the value that is to be swapped, change its adress to the value of a
 * Return: 0
 **/
void swap_int(int *a, int *b)
{
int swap;
swap = *b;
*b = *a;
*a = swap;
}
