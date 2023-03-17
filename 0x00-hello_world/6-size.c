#include <stdio.h>

/**
 * main - Prints  the size of various types on the computer
 * it is run compiled and run on.
 * Return: Always 0.
 */

int main(void)
{
	printf("the size of a char: %zu byte(s)\n", sizeof(char));
        printf("the size of an int: %zu bytes\n", sizeof(int));
        printf("the size of a long int: %zu bytes\n", sizeof(long int));
	printf("the size of a long long int: %zu bytes\n", sizeof(long long int));
	printf("the size of a float: %zu bytes\n", sizeof(float));
	return (0);
}
