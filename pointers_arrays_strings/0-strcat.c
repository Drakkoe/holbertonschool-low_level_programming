#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest: string
 * @src: the other string
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int count1; int count2;

	count1=0;
	while(dest[count1] != '\0')
	{
		count1++;
	}
	for(count2 = 0; src[count2] != '\0'; count2++, count1++)
	{
		dest[count1] = src[count2];
	}

	dest[count1] = '\0';
	return (dest);
}
