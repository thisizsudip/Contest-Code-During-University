#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n , s, cnt = 0;
    while(cin >> n >> s  ){
        if(n == 0 && s == 0){
            break;
        }
        cnt = 0;
        if((n % 10) + (s % 10) >= 10){
            cnt ++;
        }
        while(n != 0 || s != 0){
            n = n / 10;
            s = s / 10;
            if((n % 10) + (s % 10) >= 10 ){
                cnt ++;
            }
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