#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k;
    cin >> n >> k;
    
    long long cnt = (n + 1) / 2;
    if(k <= cnt){
        cout << (2 * k) - 1 << "\n";
    }
    else{
        cout << 2 * (k - cnt) << "\n";
    }
}