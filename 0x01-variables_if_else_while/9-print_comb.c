#include <stdio.h>

/**
* main - Fast
* Return: Always 0
*/
int main(void)
{
	int m;

	for (m = '0'; m <= '9'; m++)
	{
		putchar(m);
		if (m != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
putchar('\n');
return (0);
}
