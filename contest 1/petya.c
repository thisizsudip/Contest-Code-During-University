#include<stdio.h>
#include<string.h>
int main()
{
    char str1[101];
    char str2[101];
    int value;
    scanf("%s%s",str1,str2);
    for(int i = 0; str1[i]; i++ ){
        if(str1[i] >= 'A' && str1[i] <= 'Z'){
            str1[i] = str1[i] + 'a' - 'A';
        }
    }
    for(int i = 0; str2[i]; i++){
        if(str2[i] >= 'A' && str2[i] <= 'Z'){
            str2[i] = str2[i] + 'a' - 'A';
        }
    }
    value = strcmp(str1,str2);
    if(value == 0){
        printf("0");
    }
    else if(value > 0){
        printf("1");
    }
    else{
        printf("-1");
    }
}