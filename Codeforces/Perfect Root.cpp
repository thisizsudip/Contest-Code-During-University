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
        for(int i = 1; i <= n; i++){
            int y = i * i;
            arr[i] = y;
        }
        for(int i = 1; i <= n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}