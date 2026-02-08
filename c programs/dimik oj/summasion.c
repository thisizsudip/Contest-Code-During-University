#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    for(int t = 1; t <= test; t++){
        int n;
        scanf("%d",&n);
        int first_digit = n / 10000;
        int last_digit = n % 10;
        int sum = first_digit + last_digit;
        printf("sum = %d\n",sum);
    }
    return 0;
}