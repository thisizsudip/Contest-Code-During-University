#include<stdio.h>
int main()
{
    int num,sum = 0;
    scanf("%d", &num);
    if(num > 0){
        while(num >= 0 && num <= 9){
            sum = num;
            break;
        }
        while(num > 9){
            sum = 0;
            while(num > 0){
                sum = sum + num % 10;
                num = num / 10;
            }
            num = sum;
        }
        printf("%d\n",sum);
    }
}