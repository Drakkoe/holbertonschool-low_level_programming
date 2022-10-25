#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies n bytes of src to dest string
 * @dest: string 1
 * @src: string 2
 * @n: largest number of bytes
 *
 * Return: Dest Address
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
