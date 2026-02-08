#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int t;
    cin >> t;
    int cnt = 1;
    while(t--){
        string a;
        long long b;
        cin >> a >> b;
        long long rem = 0;
        if(a[0] == '-'){
            a.erase(0,1);
        }
        for(char c : a){
            rem = rem * 10 + (c - '0');
            rem %= abs(b);
        }
        if(rem == 0){
            cout << "Case " << cnt << ": divisible \n";
            cnt++;
        }
        else{
            cout << "Case " << cnt << ": not divisible \n";
            cnt++;
        }
    }
}