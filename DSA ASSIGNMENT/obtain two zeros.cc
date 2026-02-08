#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int a, b, minn, maxx;
        cin >> a >> b;
        if(a > b){
            maxx = a;
            minn = b;
        }
        else{
            maxx = b;
            minn = a;
        }
        if(((a + b) % 3 == 0) && (2 * minn) >= maxx ){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}