#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a;
    cin >> n >> m >> a;
    int ct = n * a;
    if(m <= ct){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}