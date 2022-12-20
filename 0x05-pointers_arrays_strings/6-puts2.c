#include "main.h"
/**
 * puts2 - function thatprints every other character of a string starting with the first character
 * @str: a pointer
 * Return: 0
 */
void puts2(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
