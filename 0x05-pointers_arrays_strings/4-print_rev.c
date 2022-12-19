#include "main.h"
#include <stdio.h>
/**
 * print_rev - a function to print a string in reverse followed by a new line
 * @s: a pointer
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	i = 0

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_puchar('\n');
}
