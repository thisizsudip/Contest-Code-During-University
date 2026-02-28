#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>vec(n);
        for(int i = 0; i < n; i++){
            cin >> vec[i];
        }
        bool in = true;
        for(int i = 0; i < n -1; i++){
            if(vec[i] > vec[i + 1]){
                in = false;
                break;
            }
        }
        if(in){
            cout << n << "\n";
        }
        else{
            cout << 1 << "\n";
        }
    }
}