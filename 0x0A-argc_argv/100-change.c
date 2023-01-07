#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: length of argv
 * @argv: number of argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int pos, tal, chg, aux;
	int coins[] = {25, 10, 5, 2, 1};

	pos = tal = chg = aux = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	tal = atoi(argv[1]); /*covert str to int */

	if (tal <= 0)
	{
		printf("0\n");
		return (0);
	}

	while (coins[pos] != '\0')
	{
		if (tal >= coins[pos])
		{
			aux = (tal / coins[pos]);
			chg += aux;
			tal -= coins[pos] * aux;
		}
		pos++;
	}
	printf("%d\n", chg);
	return (0);
}
