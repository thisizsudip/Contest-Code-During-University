#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, cnt = 0;
    cin >> t;
    cin.ignore(); 

    while (t--) {
        cnt++;
        string u, j;
        getline(cin, u);  
        getline(cin, j); 

        string v = u, k = j, l = u;

    
        l.erase(remove(l.begin(), l.end(), ' '), l.end());

        
        transform(v.begin(), v.end(), v.begin(), ::tolower);
        transform(k.begin(), k.end(), k.begin(), ::tolower);
        
        
        string lower_l = l;
        transform(lower_l.begin(), lower_l.end(), lower_l.begin(), ::tolower);

        if (u == j) {
            cout << "Case " << cnt << ": Yes" << endl;
        }
        else if (v == k) {
            cout << "Case " << cnt << ": Wrong Answer" << endl;
        }
        else if (lower_l == k) {
            cout << "Case " << cnt << ": Output Format Error" << endl;
        }
    }

    return 0;
}
