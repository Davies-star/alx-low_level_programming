#include <stdio.h>

/**
 * main - Different stuff
 * Return: Always 0
 */
int main(void)
{
	int a;
	int b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 28; b < 57; b++)
		{
			if (a != b)
			{
				putchar(a);
				putchar(b);
		if (a != 9 && b != 8)
		{
			putchar(',');
			putchar(' ');
		}
			}
		}
	}
	putchar('\n');
	return (0);
}



