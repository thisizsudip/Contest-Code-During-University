#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n;
    cin >> s >> n;
    for(int i = 1; i <= n; i++){
        int x,y;
        cin >> x >> y;
        if(x < s){
            s = s + y;
        }
        else{
            s = -1;
        }
    }
    if(s == -1){
        cout << "NO";
    }
    else{
        cout << "YES";
    }
}