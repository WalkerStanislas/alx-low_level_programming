#include <stdio.h>
/**
 * main - Entry point
 * Return: Always (Success)
 */

int main(void)
{
	int alpha1;
	int alpha2;

	for (alpha1 = '0'; alpha1 < '9'; alpha1++)
	{
		for (alpha2 = alpha1 + 1; alpha2 <= '9' ;alpha2++)
		{
			if (alpha1 != alpha2)
			{
				putchar(alpha1);
				putchar(alpha2);
			}
			if (alpha1 == '8' && alpha2 == '9')
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
