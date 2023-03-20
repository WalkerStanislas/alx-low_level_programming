#include <stdio.h>
/**
 * main - Entry point
 * Return: Always (Success)
 */

int main(void)
{
	int alpha;
	int last_d;
	int first_d;

	for (alpha = '01'; alpha <= '89'; alpha++)
	{
		last_d = alpha % 10;
		first_d = alpha / 10;
		if (last_d != first_d)
		{
			if (alpha == '10')
			{
				continue;
			}
			putchar(alpha);
			if (alpha != '89')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
