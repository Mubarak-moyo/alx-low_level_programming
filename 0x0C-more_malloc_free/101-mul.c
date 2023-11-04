#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * multiply - Multiply two integers.
 * @num1: The first integer.
 * @num2: The second integer.
 *
 * Return: The product of two numbers.
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * is_positive_number - Checks if a string is a positive no.
 * @str: The string.
 *
 * Return: 1(Positive) 0(Otherwise);
 */
int is_positive_number(const char *str)
{
	if (str == NULL || *str == '\0')
	return (0);

	while (*str)
{
	if (!isdigit(*str))
	str++;

	return (1);
}

/**
 * main - starting point of the code.
 * @argc: Number of command line arguments.
 * @argv: Array conatining the command line arguments.
 *
 * Return: 0(Success), 98(Error).
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	return (98);

	if (!is_positive_number(argv[1]) || !is_positive_number(argv[2]))
	printf("Error\n");
	return (98);

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2])

	int result = multiply(num1, num2)

	printf("%d\n", result)

	return (0)
}
