#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Prints a text according number
 * Return: Always (Success)
 */

int main(void)
{
	int n, lastdgit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_digit = n % 10;
	if (lastdgit < 6 && lastdgit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdgit);
	}
	if (lastdgit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdgit);
	}
	if (lastdgit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastdgit);
	}
	return (0);

}
