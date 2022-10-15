#include <stdio.h>
/* prints the lowercase alphabet in reverse */
/**
 * main - Standart input
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
