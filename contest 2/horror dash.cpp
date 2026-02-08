#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        int n;
        int cmax = 0;
        cin >> n;
        for(int i = 1; i <= n; i++){
            int c;
            cin >> c;
            if(c > cmax){
                cmax = c;
            }
        }
         cout << "Case " << i << ": " << cmax << endl;
    }
}