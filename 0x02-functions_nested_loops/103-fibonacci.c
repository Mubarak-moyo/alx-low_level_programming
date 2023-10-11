#include <stdio.h>

/**
 * main - Sum of the even-valued term.
 * Return: 0(Success)
 */
int main(void)
{
	long term1 = 1;
	long term2 = 2;
	long sum = 0;
	long next_term;

	while (term1 <= 4000000)
	{
	if (term1 % 2 == 0)
	{
		sum += term1;
	}
	next_term = term1 + term2;

	term1 = term2;

	term2 = next_term;
	}
	printf("Sum of the even-valued term below 4,000,000 is: %ld\n", sum);

	return (0);
}
