#include "main.h"
#include <stdio.h>
/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
int main(void)
{
	    int c3[3][3] = {
		            {0, 1, 5},
			            {10, 11, 12},
				            {1000, 101, 102},
					        };
	        int c5[5][5] = {
			        {0, 1, 5, 12124, 1234},
				        {10, 11, 12, 123521, 12512},
					        {1000, 101, 102, 12545, 214543435},
						        {100, 1012451, 11102, 12545, 214543435},
							        {10, 12401, 10452, 11542545, 1214543435},
								    };
		    print_diagsums((int *)c3, 3);
		        print_diagsums((int *)c5, 5);
			    return (0);
}
