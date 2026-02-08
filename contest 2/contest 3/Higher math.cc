#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for(int i = 1; i <=t; i++){
        int a,b,c;
        cin >> a >> b >> c;
        if(pow(a,2) + pow(b,2) == pow(c,2)){
            cout << "Case " << i << ": yes" << endl;
        }
        else if(pow(b,2) + pow(c,2) == pow(a,2)){
            cout << "Case " << i << ": yes" << endl;
        }
        else if(pow(c,2) + pow(a,2) == pow(b,2)){
            cout << "Case " << i << ": yes" << endl;
        }
        else{
             cout << "Case " << i << ": no" << endl;
        }
    }
}