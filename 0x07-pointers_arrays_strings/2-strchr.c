#include "main.h"
#define NULL 0
/**
 * _strstr - locate 1st occurance of char in string and returns pointer there
 * @s: string to search
 * @c: target character
 * Return: pointer to that character in string
 */
char *_strstr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] == c)
		return (&s[i]);
	else
		return (NULL);
}
