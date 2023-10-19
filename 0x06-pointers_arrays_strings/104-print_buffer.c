#include <stdio.h>

void print_buffer(char *b, int size) {
	    int i, j;
	        int offset = 0;

		    while (offset < size || (size <= 0 && offset == 0)) {
			            printf("%08x: ", offset);

				            for (i = 0; i < 10; i++) {
						                if (i % 2 == 0)
									                printf("%02x", offset + i < size ? b[offset + i] : 0);
								            else
										                    printf("%02x%s", offset + i < size ? b[offset + i] : 0, i == 9 ? "" : " ");
									            }

					            printf(" ");
						            for (j = 0; j < 10; j++) {
								                char c = (offset + j < size) ? b[offset + j] : '\0';
										            if (c >= 32 && c <= 126)
												                    putchar(c);
											                else
														                putchar('.');
													        }

							            printf("\n");
								            offset += 10;
									        }
}
