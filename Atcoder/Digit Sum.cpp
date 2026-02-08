#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        int x = i;
        int sum = 0;
        while(x > 0){
            sum = sum + (x % 10);
            x = x / 10;
        }
        if(sum == k){
            cnt++;
        }
    }
    cout << cnt << "\n";
}