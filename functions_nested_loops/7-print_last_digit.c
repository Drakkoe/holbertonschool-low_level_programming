#include "main.h"
/**
 * print_last_digit - Print the last digit of a number
 * @n: checks the number to read
 *
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -1 * last_digit;
	_putchar(last_digit + '0');
	return (last_digit);
}
