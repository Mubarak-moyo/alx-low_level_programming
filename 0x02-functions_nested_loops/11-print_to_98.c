#include "main.h"
#include <stdio.h>

/* function that prints all natural numbers from n to 98, followed by a new line. */
void print_to_98(int n)
{
	printf("%d" , n);
	
	while (n != 98)
	{
	printf(", %d", n += (n < 98) ? 1 : -1);
	}
	
	printf("\n");
}
