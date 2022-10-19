#include "main.h"
/**
 * swap_int - swaps the value of two integers
 *
 * @a: first value to swap
 * @b: second value to swap
 * @i: holds a value to be used later
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
