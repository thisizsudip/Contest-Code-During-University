#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int c, d;
        c = a % b;
        //cout << c << endl;
        if(a % b == 0){
            cout << 0 << endl;
        }
        else{
            d = b - c;
            cout << d << endl;
        }
    }
}