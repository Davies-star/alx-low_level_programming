#include <stdio.h>

/**
 * main - Different stuff
 * Return: Always 0
 */
int main(void)
{
	int a, b;

	for (a = 48; a <= 58; a++)
	{
		for (b = 28; b < 58; b++)
		{
			if (a != b)
			{
				putchar(a);
				putchar(b);
				if (a == '9' && b == '8')
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
putchar('\n');
return (0);
}
