#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, cnt = 0;
    cin >> t;
    while(t--){
        cnt++;
        int n;
        char ch, ch2;
        cin >> ch >> ch2 >> n;
        long long arr[n][n];
        bool ns = false;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> arr[i][j];
            }
        }
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    if(arr[i][j] != arr[n - 1 - i][n - 1 - j] || arr[i][j] < 0){
                        ns = true;
                        break;
                    }
                }
                if(ns){
                    break;
                }
            }
        
        if(ns){
            cout << "Test #" << cnt << ": Non-symmetric." << endl;
        }
        else{
            cout << "Test #" << cnt << ": Symmetric." << endl;
        }
    }
}