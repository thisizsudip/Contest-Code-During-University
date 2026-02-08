#include <stdio.h>

int main() {
    int test;
    scanf("%d", &test);  
    for (int t = 1; t <= test; t++) {
        int num;
        scanf("%d", &num);  
        printf("Case %d: ", t);  
        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                printf("%d ", i);  
            }
        }
        printf("%d\n", num);  
    }
    return 0;
}
