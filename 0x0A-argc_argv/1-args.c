#include <stdio.h>
#include "main.h"
/**
 * main - print the number of arguments passed to the program
 * @argc: nummber of arguments
 * @argv: array of orguments
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	(void) argv; /*Ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
