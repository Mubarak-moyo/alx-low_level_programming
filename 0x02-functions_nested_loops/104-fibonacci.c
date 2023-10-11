#include <stdio.h>

/**
 * main - This prints the firts 98 fibonacci numbers.
 *
 * Return: 0(Success)
 */
#include <stdio.h>

void add(char a[], char b[], char result[]) {
	    int carry = 0;
	        for (int i = 199; i >= 0; i--) {
			        int sum = (a[i] - '0') + (b[i] - '0') + carry;
				        result[i] = (sum % 10) + '0';
					        carry = sum / 10;
						    }
}

int main() {
	    char a[200] = {0};
	        char b[200] = {0};
		    char c[200] = {0};
		        int i;

			    a[199] = '1';
			        b[199] = '2';

				    printf("%c, %c, ", a[199], b[199]);

				        for (i = 3; i <= 98; i++) {
						        add(a, b, c);
							        for (int j = 0; j < 200; j++) {
									            a[j] = b[j];
										                b[j] = c[j];
												        }

								        if (i < 98) {
										            printf("%c, ", c[199]);
											            } else {
													                printf("%c\n", c[199]);
															        }
									    }

					    return 0;
}

