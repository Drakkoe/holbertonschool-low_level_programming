0;10;1c#include "main.h"
#include <stdio.h>
#include <string.h>
#Include <2-strlen.c>
/**
 * rev_string - reverses a string
 *
 * Return: Always 0.
 */
void rev_string(char *s);
{
	int i = strlen(s) -1;

	while (i != -1)
	{
		_putchar("%c"s[i--]);
	}
	_putchar('\n');
}
