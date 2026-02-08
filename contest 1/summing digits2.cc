#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, sum;
    while(cin >> num){
        if(num == 0){
            break;
        }
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
        cout << num << endl;
    }
}