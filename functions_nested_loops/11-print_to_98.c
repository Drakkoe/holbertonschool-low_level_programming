#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from an input
 *               separated by a comma and followed by space.
 *               numbers are printed in order.
 *
 * @n: initial number
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
