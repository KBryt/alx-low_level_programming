#include <stdio.h>
#include "main.h"
/**
 * _puts - the function prints string followed by a new line to stdout
 * @str: pointer value
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\n')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
