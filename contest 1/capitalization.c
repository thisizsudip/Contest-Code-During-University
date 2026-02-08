#include<stdio.h>
int main()
{
    char ch[1000];
    scanf("%s",ch);
    if(ch[0] >= 'a' && ch[0] <= 'z'){
        ch[0] = ch[0] - 32;
    }
    printf("%s", ch);
}