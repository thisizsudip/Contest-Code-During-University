#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int tc = 0; tc < t; tc++) {
        int n;
        string s;
        cin >> n >> s;
        int K = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] != s[(i + 1) % n]) K++;
        }
        int ans = K + (K < n ? 1 : 0);
        cout << ans << endl;
    }
}