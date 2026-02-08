#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; 
    cin >> t;
    while(t--){
        int len;
        cin >> len;
        string s;
        cin >> s;
        vector<int> freq(26, 0);

        for (char c : s) {
            freq[c - 'a']++;
        }
        bool ok = true;
        for (int i = 0; i < 26; i++) {
            if (freq[i] > 2) {
                ok = false;
                break;
            }
        }
        if(ok == true){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}