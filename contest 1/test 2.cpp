#include<stdio.h>
int main()
{
    int a = 2, b = 3;
    b = a++ + b--; // b = 5; 3, 4
    printf("%d\t %d\n", a, b);
    a = a-- + ++b;
    printf("%d\t %d\n", a, b);
    b = ++a + --b;
    printf("a = %d \n b = %d", a,b);
}