#include <stdio.h>

/**
 * main - This is a code that prints the largest prime factor.
 *
 * Return: 0(Success)
 */
int main(void)
{
	long value = 612852475143;
	long largest_prime = -1;
	long i;

	while (value % 2 == 0)
	{
	largest_prime = 2;
	value /= 2;
	}

	for (i = 3; i * i <= value; i += 2)
	{
	while (value % i == 0)
	{
	largest_prime = i;
	value /= i;
	}
	}

	if (value > 1)
	{
	largest_prime = value;
	}

	printf("%ld\n", largest_prime);
	return (0);
}

