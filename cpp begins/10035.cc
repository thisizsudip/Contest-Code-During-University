#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, s;
    while(cin >> n >> s  ){
        if(n == 0 && s == 0){
            break;
        }
        long long cnt = 0, carry = 0;
        while(n != 0 || s != 0 || carry > 0){
            int digit_n = n % 10;
            int digit_s = s % 10;
            if(digit_n + digit_s + carry >= 10 ){
                carry = 1;
                cnt ++;
            }
            else{
                carry = 0;
            }
            n /= 10;
            s /= 10;
        }
        if(cnt == 0){
            cout << "No carry operation." << endl;
        }
        else if(cnt == 1){
            cout << cnt << " carry operation." << endl;
        }
        else{
             cout << cnt << " carry operations." << endl;
        }
    }
}