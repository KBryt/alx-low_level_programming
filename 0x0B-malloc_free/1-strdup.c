#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *aaa;
	int i, r;

	if (str == NULL)
		return (NULL);
	while (i = 0; str[i] != '\n')
	{
		i++;
	}
	aaa = malloc(sizeof(char) * (i + 1));

	if (aaa == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		aaa[r] = str[r];
	return (aaa);
}
