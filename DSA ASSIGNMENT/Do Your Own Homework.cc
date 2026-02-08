#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, cnt = 0;
    cin >> t;
    while(t--){
        cnt++;
        int n, d, D;
        cin >> n;
        map<string, int> sub;
        map<string, int> ::iterator it;
        while(n--){
            string s;
            int d;
            cin >> s >> d;
            sub[s] = d;
        }
        cin >> D;
        string s2;
        cin >> s2;
        if(sub.find(s2) != sub.end()){
            int dn = sub[s2];
            if(dn <= D){
                cout << "Case " << cnt << ": Yesss" << endl;
            }
            else if(dn <= D + 5){
                cout << "Case " << cnt << ": Late" << endl;
            }
            else{
            cout << "Case " << cnt << ": Do your own homework!" << endl;
            }
        }
        else{
            cout << "Case " << cnt << ": Do your own homework!" << endl; 
        }
    }
}