#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: string to be change
 *
 * Return: always 0
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
