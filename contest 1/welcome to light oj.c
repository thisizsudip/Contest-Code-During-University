#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 1; i<=t;i++){
        int a, b;
        scanf("%d%d", &a, &b);
        if(a >= 0 && a < 11 && b >= 0 && b < 11){
            int sum = a + b;
            printf("Case %d: %d\n", i, sum);
        }
    }
    return 0;
}