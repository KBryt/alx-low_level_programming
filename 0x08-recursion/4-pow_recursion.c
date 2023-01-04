#include "main.h"
/**
 * _pow_recursion - return the value x raised to the power of y
 * @y: lower than 0, the function returns -1
 * @x: the main value that will be returned
 * Return: the value @x
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
