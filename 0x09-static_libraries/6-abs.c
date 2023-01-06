#include "main.h"

/**
 * _abs - Compute an absolute value of an integer
 *
 * @n: The integer to be operated upon
 * Return: Returns an unsigned int value for calling a function
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);
	}
}
