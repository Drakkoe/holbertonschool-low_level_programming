#include "main.h"
/* prints the alphabet in lower case with a new line */
/**
 * print_alphabet - prints the alphabet in lower case
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z'; letter++)
	_putchar(letter);

	_putchar('\n');
}
