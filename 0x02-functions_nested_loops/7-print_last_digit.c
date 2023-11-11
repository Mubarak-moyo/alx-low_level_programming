#include "main.h"

/**
 * print_last_digit - This prints the last digit of a number.
 * @n: The number to retrieve the digit from.
 *
 * Return: The last digit.
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
	last_digit = -1 * (n % 10);
	}
	else
	{
	last_digit = n % 10;
	}

	_putchar('0' + last_digit);

	return (last_digit);
}
