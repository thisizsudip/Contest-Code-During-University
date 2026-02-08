#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, res = 0;
    cin >> t;
    while(t--){
        int f;
        cin >> f;
        res = 0;
        while(f--){
            int a, b, c;
            cin >> a >> b >> c;
            res = res + a * c;
        }
        cout << res << endl;
    }
}