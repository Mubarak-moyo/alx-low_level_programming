#ifndef MAIN_H
#define MAIN_H

/* function that fills a memory with constant byte */
char *_memset(char *s, char b, unsigned int n);
/* function that copies memory area */
char *_memcpy(char *dest, char *src, unsigned int n);
/* function that locates a character in string */
char *_strchr(char *s, char c);
/* function that gets the length of a prefix substring */
unsigned int _strspn(char *s, char *accept);
/* function that searches a string for any set of bytes */
char *_strpbrk(char *s, char *accept);
/* function that locates a substring */
char *_strstr(char *haystack, char *needle);
/* function that prints the chessboard */
void print_chessboard(char (*a)[8]);
int _putchar(char c);
/*  function that prints the sum of the two diagonals of a square matrix of integers */
void print_diagsums(int *a, int size);
/* function that sets the value of a pointer to a char */
void set_string(char **s, char *to);

#endif /* MAIN_H */
