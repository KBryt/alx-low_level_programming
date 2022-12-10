#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = '0'; 
	char letter = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (letter <= 'f')
	{
		putchar(num);
		letter++;
	}

	putchar('\n');

	return (0);
}
