0;10;1c#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverses a string
 *
 * Return: Always 0.
 */
void rev_string(char *s);
{
	int a = 0;
	int b = 0;
	char c;

	while (s[b++])
	{
		a++;
	}
	for (b = a -1; b >= a / 2 ; b--)
	{
		c = s[b];
		s[b] = s[a - b - 1];
		s[a - b - 1] = c;
	}
}
