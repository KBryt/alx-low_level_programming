#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @av: double pointer array
 * @ac: int input
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	char *str;

	int i = 0, n = 0, r = 0, l = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		n = 0;
		while (av[i][n] != '\0')
		{
			r++;
			n++;
		}
		i++;
	}
	l = l + ac + 1;
	str = malloc(sizeof(char) * l);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n] != '\0'; n++)
		{
			str[r] = av[i][n];
			r++;
		}
		str[r++] = '\n';
	}
	return (str);
}
