#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    vector<long long>v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int q; 
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        int count = upper_bound(v.begin(), v.end(), x) - v.begin();
        cout << count << endl;
    }
}