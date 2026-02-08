#include <bits/stdc++.h>
using namespace std;

int main() {
   // ios::sync_with_stdio(false);
   // cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        
        bool all_zero = true;
        for (int i = 0; i < n; i++) {
            if (a[i] == 1) {
                all_zero = false;
                break;
            }
        }

        
        int zero_groups = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 0 && (i == 0 || a[i-1] == 1)) {
                zero_groups++;
            }
        }

        
        int first_zero = -1, last_zero = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                if (first_zero == -1) first_zero = i;
                last_zero = i;
            }
        }

        bool can_remove_all = false;
        if (first_zero != -1 && last_zero - first_zero + 1 >= 2) {
            can_remove_all = true; 
        }

        
        if (all_zero) {
            cout << "Bob\n";  
        }
        else if (can_remove_all) {
            cout << "Alice\n"; 
        }
        else if (zero_groups % 2 == 1) {
            cout << "Alice\n"; 
        }
        else {
            cout << "Bob\n";   
        }
    }

    return 0;
}
