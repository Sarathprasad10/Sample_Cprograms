#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int maxAnd = 0, maxOr = 0, maxXor = 0;

    // Calculate maximum values for AND, OR, and XOR directly
    for (int i = 1; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {
            int tempAnd = i & j;
            int tempOr = i | j;
            int tempXor = i ^ j;

            if (tempAnd < k && tempAnd > maxAnd) {
                maxAnd = tempAnd;
            }
            if (tempOr < k && tempOr > maxOr) {
                maxOr = tempOr;
            }
            if (tempXor < k && tempXor > maxXor) {
                maxXor = tempXor;
            }
        }
    }

    printf("%d\n%d\n%d\n", maxAnd, maxOr, maxXor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}