#include <stdio.h>

/**
 * main - Sum of the even-valued term.
 * Return: 0(Success)
 */
int main(void)
{
	long long term1 = 1;
	long long term2 = 2;
	long long sum = 0;

	while (term1 <= 4000000)
	{
	if (term1 % 2 == 0)
	{
		sum += term1;
	}
	long long next_term = term1 + term2;

	term1 = term2;

	term2 = next_term;
	}
	printf("Sum of the even-valued term below 4,000,000 is: %lldd\n", sum);

	return (0);
}
