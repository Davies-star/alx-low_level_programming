#include <stdio.h>

/**
 * main - Print except q and e
 * Return: Always 0
 */

int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'q')
			putchar(la);
	}
	{
		if (la != 'e')
			putchar(la);
	}
	putchar('\n');
	return (0);
}
