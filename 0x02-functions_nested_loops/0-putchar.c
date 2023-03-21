#include <unistd.h>
/**
 * main - Entry
 * Return: Always (Success)
 */

int _putchar(char a)
{

	return (write(1, &a, 1));

}
