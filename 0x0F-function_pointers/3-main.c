#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Performs calculation based on the user input.
 * @argv: Array conatining the command line arguments.
 * @argc: Number of command line arguments and program's name.
 *
 * Return: 0(Success).
 */
int main(int argc, char *argv[])
{
	int digit1, digit2, result;
	char *operator;
	int (*op_func)(int, int);

	if (argc != 4)
	{
	printf("Error\n");
	exit(99);
	}

	digit1 = atoi(argv[1]);
	digit2 = atoi(argv[3]);
	operator = argv[2];

	op_func = get_op_func(operator);

	if (op_func == NULL)
	{
	printf("Error\n");
	exit(99);
	}

	result = op_func(digit1, digit2);
	printf("%d\n", result);

	return (0);
}
