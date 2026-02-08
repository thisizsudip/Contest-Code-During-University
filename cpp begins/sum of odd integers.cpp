#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        long long n, k;
        cin >> n >> k;
        if((n >= k * k) and (n % 2 == k % 2)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}