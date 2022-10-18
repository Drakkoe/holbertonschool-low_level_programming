#include "main.h"
/**
 * _isalpha - check alphabetic character
 * @c: checks character
 *
 * Return: (0)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c >= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}
