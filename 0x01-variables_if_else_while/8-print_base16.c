#include <stdio.h>

/**
 * main - print hexa decimals
 * Return: Always 0
 */
int main(void)
{
	int num;
	char la;

	for (num = 0; num <= 10; num++)
		putchar(num % 10);
	for (la = 'a'; la <= 'f'; la++)
		putchar(la);
	putchar('\n');
	return (0);
}
