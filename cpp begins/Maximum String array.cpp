#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int g = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == 0 && (i == 0 || arr[i - 1] == 1)){
                g++;
            }
        }
        bool all_zero = true;
        for (int x : arr) {
            if (x == 1) {
                all_zero = false;
                break;
            }
        }
        if(all_zero){
            cout << "Bob\n";
        }
        else if(g == 0 || g % 2 == 1){
            cout << "Alice\n";
        }
        else{
            cout << "Bob\n";
        }
    }
}