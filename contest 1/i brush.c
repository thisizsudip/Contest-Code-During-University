#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++){
        int n, sum = 0;
        scanf("%d",&n);
        for(int i = 1; i <= n; i++){
            int d;
            scanf("%d", &d);
            if(d > 0){
                sum = sum + d;
            }
        }
        printf("Case %d: %d\n",i,sum);
    }
}