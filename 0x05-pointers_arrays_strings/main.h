#ifndef MAIN_H
#define MAIN_H

/* This is the Prototype for _putchar */
int _putchar(char);
/* function that checks for uppercase letter */
int _isupper(int c);
/* function that checks for a digit */
int _isdigit(int c);
/* function that multiplies two integers */
int mul(int a, int b);
/* function that prints numbers */
void print_numbers(void);
/* function that prints the numbers from 0 to 9 */
void print_most_numbers(void);
/* function that prints 10 times the number */
void more_numbers(void);
/* function that draws a straight line */
void print_line(int n);
/* function that draws a diagonal line */
void print_diagonal(int n);
/* function that prints a square */
void print_square(int size);
/* function that prints a triangle */
void print_triangle(int size);
/* function that prints an integer */
void print_number(int n);
/* function that takes a pointer to an int as a parameter and updates its value */
void reset_to_98(int *n);
/* function that swaps the values of two integers */
void swap_int(int *a, int *b);

#endif /* MAIN_H */
