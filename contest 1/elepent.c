#include<stdio.h>
int main()
{
    int x, n;
    scanf("%d",&x);
    if(x > 0){
        n = x / 5;
    }
    if(x % 5 == 0){
        n = n;
    }
    else{
        n = n + 1;
    }
    printf("%d", n);
}