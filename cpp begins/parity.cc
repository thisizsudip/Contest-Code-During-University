#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        unsigned long long a, cnt = 0;
        cin >> a;
        string s = "";
        while(a > 0){
           s = to_string(a % 2) + s;
           a = a / 2; 
        }
        for(unsigned long long i = 0; i < s.length(); i++){
            if(s[i] == '1'){
                cnt++; 
            }
        }
        if(cnt % 2 == 0){
            cout << "Case " << i << ": even" << endl;
        }
        else{
            cout << "Case " << i << ": odd" << endl; 
        }
    }
}