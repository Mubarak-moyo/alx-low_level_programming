#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - This function returns the sum of a and b.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: The sum of the integers.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - This function returns the difference between a and b.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: The difference between a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul -  This function returns the product of a and b.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: The product.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - This function returns the result of the division of a and b.
 * @a: The integer to be divided.
 * @b: The integer dividing a.
 * Return: The result of the division.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(2);
	}
	return (a / b);
}

/**
 * op_mod - function that return the remainder of the division of a and b.
 * @a: The dividend.
 * @b: The divisor.
 * Return: The remainder.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
	printf("Error\n");
	exit(2);
	}
	return (a % b);
}
