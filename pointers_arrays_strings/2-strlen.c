#include "main.h"
#include <stdio.h>
/**
 * _strlen - counts the strign
 *
 * Return: Always the lenght of a string
 */
int _strlen(char *s)
{
	int g = 0;

while (s[g] != '\0')
	g++;
return (g);
}
