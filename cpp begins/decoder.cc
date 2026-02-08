#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[1000];
    while(scanf("%s", ch) != EOF){
        for(int i = 0; ch[i] != '\0'; i++){
            ch[i] = ch[i] - 7;
        }
        printf("%s\n",ch);
    }
}