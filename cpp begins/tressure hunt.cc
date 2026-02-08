#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        long long res = 0, cnt = 0;
        long long x, y, a;
        cin >> x >> y >> a;
        long long target = (2 * a) + 1;
        int i;
        for( i = 1; res < target; i++){
            if(i % 2 == 0){
                res = res + y;
                cnt++;
            }
            else{
                res = res + x;
                cnt++;
            }
        }
        if((i - 1) % 2 == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl; 
        }
    }
}