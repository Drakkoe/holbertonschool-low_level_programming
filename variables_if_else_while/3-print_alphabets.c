#include <stdio.h>
/* Prints the alphabet in lower case and then in uppercase */
/**
 * main - Standard Input
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);
for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
