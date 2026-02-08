#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        int n;
        cin >> n;
        int i, j;
        i = n / 10000;
        j = n % 10;
        int res = i + j;
        cout  << "Sum = " << res << endl;
    }
}