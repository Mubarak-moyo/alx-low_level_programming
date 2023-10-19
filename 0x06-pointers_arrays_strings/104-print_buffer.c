#include <stdio.h>

void print_buffer(char *b, int size) {
	int i, j;

	    for (i = 0; i < size || (size <= 0 && i == 0); i += 10) {
		            printf("%08x: ", i);

			            for (j = 0; j < 10; j++) {
					                if (i + j < size) {
								                printf("%02x%c", b[i + j] & 0xFF, (j % 2 == 1) ? ' ' : '\0');
										            } else {
												                    printf("  ");
														                }
							        }

				            for (j = 0; j < 10; j++) {
						                if (i + j < size && b[i + j] >= 32 && b[i + j] <= 126) {
									                printf("%c", b[i + j]);
											            } else if (i + j < size) {
													                    printf(".");
															                }
								        }

					            printf("\n");
						        }
}

