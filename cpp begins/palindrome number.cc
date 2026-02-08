#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long p,p2;
    int t,cnt;
    cin >> t;
    for(int i = 0; i <= t;i++){
        cin >> p;
        p2 = 0;
        int rem = p % 10;
        p2 = p2 * 10 + rem;
        p = p / 10;
        while(p != p2){
            while(p != 0){
                p2 = 0;
                int rem = p % 10;
                p2 = p2 * 10 + rem;
                p = p / 10;
            }
            if(p == p2){
                cnt++;
                cout << cnt << " " << p; 
            }
            cnt++;
        }
   }
}