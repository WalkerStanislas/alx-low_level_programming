#include <unistd.h>
/**
 * Entry - Entry point
 * Return: Always (Success)
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		return (write(1, &a, 1));
	}

}
