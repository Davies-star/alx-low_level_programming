#include <stdio.h>

/**
 * main - All possible
 * Return: Always 0
 */
int main(void)
{
	int m;

	for (m = 48; m < 58; m++)
	{
		putchar(m);
	}
	if (m != 47)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
