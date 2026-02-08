#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int l = s.length();
        int cnt = 0;
        for(int i = 0; i < l; i++){
            if(s[i] == '0'){
                cnt++;
            }
        }
        int cnt2 = l - cnt;
        int res = cnt2 + k;
        if(res >= n){
            cout << n << endl;
        }
        else{
            cout << res << endl;
        }
    }
}