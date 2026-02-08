#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t , res;
    cin >> t;
    for(int i = 1; i <= t; i++){
        long long a, b;
        cin >> a >> b;
        res = (a * b) / 2;
        cout << "Case " << i << ": " << res << endl;
    }
}