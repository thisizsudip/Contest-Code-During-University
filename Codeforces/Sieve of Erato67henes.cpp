#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        bool f = false;
        if(find(arr.begin(), arr.end(), 67) != arr.end()){
            f = true;
        }
        if(f == true){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }
}