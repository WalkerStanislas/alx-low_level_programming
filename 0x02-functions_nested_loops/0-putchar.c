#include <unistd.h>
/**
 * main - Entry
 * Return: Always (Success)
 */

int main(char a)
{

	return (write(1, &a, 1));

}
