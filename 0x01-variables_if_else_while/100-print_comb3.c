#include <stdio.h>

/**
 * main - Different stuff
 * Return: Always 0
 */
int main(void)
{
	int a, b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '1'; b < '9'; b++)
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
