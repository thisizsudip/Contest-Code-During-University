#include<stdio.h>
int main()
{
    while(1){
        int v,t;
        scanf("%d%d", &v,&t);
        int d = v - 2 * t;
        printf("the result is : %d  %d %d\n",d,v,t);
    }    
}