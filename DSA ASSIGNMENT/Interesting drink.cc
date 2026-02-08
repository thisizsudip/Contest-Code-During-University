#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    long long q;
    cin >> q;
    for(int i = 0; i < q; i++){
        long long cnt = 0;
        long long x;
        cin >> x;
        for(int j = 0; j < n; j++){
            if(arr[j] <= x){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
    //cout << cnt;
}