/**
 *File name: 6-size.c
 *Author: Harold Garzon
 *
 *Description: main  - prints the size of various
 *types based on the computer it is compiled
 *and run on.
 *
 *Return: Always 0
 */

#include <stdio.h>

int main(void)
{
	printf("Size of a char: %zu bytes(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float; %zu byte(s)\n", sizeof(float));

	return (0);
}