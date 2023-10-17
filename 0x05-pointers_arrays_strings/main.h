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
/* function that return the length of a string */
int _strlen(char *s);
/* funtion that prints a string, followed by a new line */
void _puts(char *str);
/* function that prints a string in reverse */
void print_rev(char *s);
/* function that reverses a string */
void rev_string(char *s);
/* function that prints every other character of a string */
void puts2(char *str);
/* function that prints half of a string, followed by a new line */
void puts_half(char *str);
/* function that prints n elements of an array of integers, followed by a new line */
void print_array(int *a, int n);
/* function that copies the string pointed to by src,including the terminating null byte (\0), to the buffer pointed to by dest. */
char *_strcpy(char *dest, char *src);

#endif /* MAIN_H */
