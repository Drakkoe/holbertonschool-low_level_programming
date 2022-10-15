#include <stdio.h>
/* Prints all single numbers of base 10 starting from 0 */
/**
 * main - standard input
 *
 * Return: always 0
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		printf("%d", number);

	printf("\n");

	return (0);
}
