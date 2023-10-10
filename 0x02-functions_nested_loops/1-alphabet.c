#include "main.h"

/**
 * Print_alphabet - prints the entire alphabet in lowercase followed by a new line
 */
int main(void)
{
void print_alphabet(void)
{
	char letter = 'a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	
	_putchar('\n');
}
}
