#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - Also concatenates two strings
 * @dest: firs string
 * @src: second string
 *
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int count1 = 0;
	int count2;

	count2 = strlen(dest);

	if (src[0] != '\0')
	{
		for (; count1 < n; count1++, count2++)
		{
			dest[count1++] = src[count2];
		}
		dest[count2 + 1] = '\0';
	}
	return (dest);
}
