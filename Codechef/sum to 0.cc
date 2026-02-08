#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s, t;
        bool valid = true;
        cin >> s >> t;
        int cnt1 = 0, cnt2 = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1'){
                cnt1++;
            }
            if(t[i] == '1'){
                cnt2++;
            }
            if(t[i] == '1' and s[i] != '1'){
                valid = false;
            }
        }
        int x;
        x = cnt1 - cnt2;
        if(cnt1 >= cnt2 and x % 2 == 0 and valid){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}