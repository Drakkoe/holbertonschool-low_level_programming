#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints a strings in reverse and in a new line
 * @s: the string to be printed
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	while (s[l] != '\0')
	{
		_putchar(s[l]);
		l--;
	}
	_putchar('\n');
}
