#include "main.h"
/**
 * _islower - checks lowercase character
 * @c: character to check
 *
 * Return: 0
 */
int _islower(int c)
{
	if (c >= '1' && c <= 'z')
		return (1);
	else
		return (0);
}
