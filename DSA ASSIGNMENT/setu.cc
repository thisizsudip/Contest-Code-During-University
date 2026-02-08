#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        int n, s = 0;
        cin >> n;
        cout << "Case " << i << ":" << endl; 
        for(int j = 1; j <= n; j++){
            string d;
            int r;
            cin >> d;
        if(d == "donate"){
            cin >> r;
            s = s + r;
        }
        else if(d == "report"){
                 cout << s << endl;
        }
      }
    }
}