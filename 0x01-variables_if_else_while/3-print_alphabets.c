#include <stdio.h>

/**
 * main - Upper and lower
 * Return: Always 0
 */

int main(void)
{
	char ul;

	for (ul = 'a'; ul <= 'z'; ul++)
	{
		putchar(ul);
	}
	for (ul = 'A'; ul <= 'Z'; ul++)
	{
		putchar(ul);
	}
	putchar('\n');
	return (0);
}
