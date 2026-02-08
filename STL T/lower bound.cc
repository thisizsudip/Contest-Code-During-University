#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; 
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    int t; 
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        auto it = lower_bound(v.begin(), v.end(), x);
        int idx = it - v.begin();

        if(it != v.end() && *it == x){
            cout << "Yes " << (idx + 1) << endl;
        }
        else{
            cout << "No " << (idx + 1) << endl;
        }
    }
}
