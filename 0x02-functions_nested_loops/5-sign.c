#include "main.h"

/**
 * print_sign - This function prints the sign of the number.
 * @n: The number we are checking.
 *
 * Return: The number with a sign is returned.
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('-');
	return (-1);
	}
}
