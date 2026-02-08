#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        long long arr[n];
        long long sum = 0;
        long long am = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            sum += arr[i];
            am = max(am, arr[i]);
        }
        if(sum % 2 != 0 || am > sum - am){
            cout << -1 << endl;
        }
        else{
            cout << sum / 2 << endl;
        }
    }
}