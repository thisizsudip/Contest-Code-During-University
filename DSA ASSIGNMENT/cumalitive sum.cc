#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int m;
    cin >> m;
    while(m--){
        int a, b;
        int sum = 0;
        cin >> a >> b;
        for(int i = a; i <= b; i++){
            sum = sum + arr[i];
        }
        cout << sum << endl;
    }
}