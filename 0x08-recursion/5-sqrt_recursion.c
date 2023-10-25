#include "main.h"

int sqrt_helper(int n, int low, int high) {
	    if (low > high) {
		            return -1;
			        }

	        int mid = (low + high) / 2;
		    int square = mid * mid;

		        if (square == n) {
				        return mid;
					    } else if (square < n) {
						            return sqrt_helper(n, mid + 1, high);
							        } else {
									        return sqrt_helper(n, low, mid - 1);
										    }
}

int _sqrt_recursion(int n) {
	    if (n < 0) {
		            return -1;
			        }
	        if (n == 0 || n == 1) {
			        return n;
				    }

		    return sqrt_helper(n, 0, n);
}
