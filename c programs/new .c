#include <stdio.h>

int main() {
    int test;
    scanf("%d", &test);  // Read the number of test cases
    for (int t = 1; t <= test; t++) {
        int num;
        scanf("%d", &num);  // Read the number for which divisors are needed
        printf("Case %d: ", t);  // Print case number
        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                printf("%d ", i);  // Print divisor
            }
        }
        printf("%d\n", num);  // The number itself is always a divisor
    }
    return 0;
}
