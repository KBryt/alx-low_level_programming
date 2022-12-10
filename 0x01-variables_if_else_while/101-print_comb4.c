#include <stdio.h>

/**
 * *main - Prints numbers between 012 to 289.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, e, k;

	a = 48;
	e = 48;
	k = 48;

	while (e < 58)
	{
		a = 48;
		while (a < 58)
		{
			k = 48;
			while (k < 58)
			{
				if (e != a && e != k && a != k && e < a && a < k )
				{
					putchar(e);
					putchar(a);
					putchar(k);
					if (a == 56 && e == 55 && k == 57)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			a++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}

		
