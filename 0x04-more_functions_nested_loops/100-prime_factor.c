#include <stdio.h>

int main() {
	    long number = 612852475143;
	        long max_prime = -1;
		    long i;

		        while (number % 2 == 0) {
				        max_prime = 2;
					        number /= 2;
						    }

			    for (i = 3; i * i <= number; i += 2) {
				            while (number % i == 0) {
						                max_prime = i;
								            number /= i;
									            }
					        }

			        if (number > 1) {
					        max_prime = number;
						    }

				    printf("%ld\n", max_prime);
				        return 0;
}

