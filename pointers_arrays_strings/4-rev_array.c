#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * @a: integer to be reversed
 * @n: lenght of array a.
 *
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i = 0, t;

	n = n - 1;
	while (i < n)
	{
		t = *(a + i);
		*(a + i) = *(a + n);
		*(a + n) = t;
		i++;
		n--;
	}
}
