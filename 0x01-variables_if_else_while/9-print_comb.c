#include <stdio.h>
/**
 * main - Entry numbers
 * Return: Always (Success)
 */

int main (void)

{
	int i;

	for (i = '0'; i < '9'; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('9');
	putchar('\n');
	return (0);

}

