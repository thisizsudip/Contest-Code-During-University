#include<stdio.h>
int main()
{
    int t,odd = 0,even = 0;
    scanf("%d",&t);
    int a[t];
    for(int i = 0; i < t; i++){
        scanf("%d",& a[i]);
        if(a[i] % 2 != 0){
            odd++;
        }
        else{
            even++;
        }
    }
    int pair = odd * even;
    printf("%d",pair);

}