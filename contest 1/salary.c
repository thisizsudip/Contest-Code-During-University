#include<stdio.h>
int main()
{
    int t,a,b,c;
    scanf("%d",&t);
    for(int i = 1; i <= t; i++){
        scanf("%d%d%d",&a,&b,&c);
        if(a > b && a < c || a < b && c < a){
            printf("Case %d: %d\n",i,a);
        }
        else if(b > c && b < a || c > b && a < b){
            printf("Case %d: %d\n",i,b);
        }
        else{
            printf("Case %d: %d\n",i,c);
        }
    }
}