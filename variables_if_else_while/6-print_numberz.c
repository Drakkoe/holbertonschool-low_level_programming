#include <stdio.h>
/* Prints single digit number of base 10 starting from 0 */
/**
 * main - Standart input
 *
 * Return: Always 0
 */
int main(void)
{
int numberz;

for (numberz = 0; numberz < 10; numberz++)
putchar((numberz % 10) + '0');

putchar('\n');

return (0);
}
