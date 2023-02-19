#include <stdio.h>

/**
 * main - Print 0123456789
 * Return: Always 0
 */

int main(void)

{
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
