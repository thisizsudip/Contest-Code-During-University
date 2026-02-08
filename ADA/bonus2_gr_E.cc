#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    while(cin >> n && n > 0){
        vector<long long>v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for(int i = 0; i < n; i++){
            if(i > 0){
                cout << " ";
            }
            cout << v[i];
        }
        cout << "\n";
    }
}
