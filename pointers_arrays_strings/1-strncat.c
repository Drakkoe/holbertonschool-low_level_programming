#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - Also concatenates two strings
 * @dest: firs string
 * @src: second string
 * @n: largest number of bytes to append
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j < n)
		*(dest + i) = *(src + j);
	return (dest);
}
