#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    const double pi = 2 * acos(0.0);
    double r;
    double res;
    cin >> t;
    for(int i= 1; i <= t; i++){
        cin >> r;
        res = ((2 * r) * (2 * r)) - (pi * r * r);
        cout << fixed << setprecision(2) << "Case " << i << ": " << res + 1e-9 << endl;
    }
}