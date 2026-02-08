#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    vector<pair<int,int>>v;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        //v.push_back({a, b});
        //v.push_back({c, d});
        int s = min(a,b);
        int s2 = min(c,d);
        int m = max(a,b);
        int m2 = max(c,d);
        if(s == s2 && m == m2){
            cout << "Yes \n" ;
        }
        else if(s == s2 == m == m2){
            cout << "Yes \n";
        }
        else if((s == 1 && m == 4) && (s2 == 1 && m2 == 4)){
            cout << "Yes \n";
        }
        else if(s != m){
            if((s * (s + 1) <= m) && (s2 * (s2 + 1)<= m2) ){
                cout << "Yes \n";
            }
        }
        else{
            cout << "No \n";
        }
    }
}