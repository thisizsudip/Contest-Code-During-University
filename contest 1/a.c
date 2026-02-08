#include <stdio.h>

int main() {
    int v, t;
    while (scanf("%d %d", &v, &t) != EOF) {  // Keep reading until EOF
        int d = v * 2 * t;  // Correct displacement formula
        printf("%d\n", d);
    }
    return 0;
}
