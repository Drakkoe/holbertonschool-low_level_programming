#include <stdio.h>
/* Prints alphabet in lower case without q and e */
/**
 * main - standard input
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;

	for (letter = 'a' ; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
