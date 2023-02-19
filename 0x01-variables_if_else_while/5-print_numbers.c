#include <stdio.h>

/**
 * main - Print 0123456789
 * Return: Alway 0
 */
int main(void)
{
	char dt;

	for (dt = '0'; dt <= '9'; dt++)
		putchar(dt);
	putchar('\n');
	return (0);
}
