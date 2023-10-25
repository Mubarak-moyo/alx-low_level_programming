#include "main.h"

/**
 * _pow_recursion - This returns the value of x raised to the power of y.
 * @x: The value we are trying to raise to the power of y.
 * @y: The power we are raising x to.
 *
 * Return: The new value of x.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	else if (y == 0)
	{
	return (1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}
