#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a strings followed by a new line
 * @str: contains the value to print
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	int l = 0;

	while (str[l] != '\0')
	{
		l++;
		_putchar(str[l]);
	}
}
