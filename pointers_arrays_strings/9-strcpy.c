#include "main.h"
#include <string.h>

/**
 * _strcpy - copies string pointed to by src to buffer pointed by dest
 * @src: string to copy
 * @dest: destination
 *
 * Return: always 0
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
