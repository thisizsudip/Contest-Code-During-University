#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int a,b;
        if(n > 10){
            a = n - 10;
        }
        else{
            a = 0;
        }
        b = n - a;
        cout << a << " " << b << endl;
    }
}