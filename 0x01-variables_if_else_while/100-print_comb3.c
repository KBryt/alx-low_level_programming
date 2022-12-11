#include <stdio.h>

/**
 * main - Prints numbers between 00 to 89.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 48;
	int e = 48;

	while (e < 58)
	{
		a = 48;
		while (a < 58)
		{
			if (e != a && e < a)
			{
				putchar(e);
				putchar(a);
				if (a == 57 && e == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			a++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
