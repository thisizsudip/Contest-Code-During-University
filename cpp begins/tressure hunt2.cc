#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, a;
        cin >> x >> y >> a;
        long long depth = 0;
        long long target = 2 * a + 1;
        int i = 1;
        while (depth < target) {
            if (i % 2 == 1){
                depth += 2 * x;
                i++;
            }
            else {
                depth += 2 * y;
                i++;
            }
        }
        if((i - 1) % 2 == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl; 
        }
    }
}
