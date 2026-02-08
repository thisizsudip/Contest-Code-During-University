#include<bits/stdc++.h>
using namespace std;

long long big_mod(long long x, long long y, long long z){
    if(y == 0){
        return 1;
    }
    if(y % 2 == 0){
        long long res = big_mod(x, y / 2, z);
        return ((res % z) * (res % z)) % z;
    }
    else return (x % z * big_mod(x, y - 1, z)) % z;
}

int main(){
    long long x, y, z, t;
    cin >> t;
    while(t--){
        cout << big_mod(x, y, z) << '\n';
    }
}