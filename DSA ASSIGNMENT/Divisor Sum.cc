#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<long long> v(500000, 0);
    for(int i = 1; i <= 500000; i++){
        for(int j = 2 * i; j < 500000; j += i){
            v[j] += i;
        }
    }
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << v[n] << endl;
    }
}