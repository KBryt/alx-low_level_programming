#include "main.h"
/**
 * swap_int - the function is to swap integers between a and b
 * @a: the parameter a is an integer
 * @b: the parameter b is also an integer
 * int c: addressed the swapped value location
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
