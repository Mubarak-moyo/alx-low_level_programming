#include "main.h"

/**
 * factorial - function that returns the factorial of a given a number.
 * @n: The number.
 *
 * Return: The factorial of a given number.
 */
int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0)
	{
	return (1);
	}
	else
	{
	return (n * factorial(n - 1));
	}
}
