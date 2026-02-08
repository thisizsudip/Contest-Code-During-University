#include<bits/stdc++.h>
using namespace std;
int main(){
    int x, y;
    cin >> x >> y;
    int t = y / 2;
    int rem = x - y;
    int res = rem + t;
    cout << res << "\n";
}