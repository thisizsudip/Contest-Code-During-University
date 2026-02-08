#include <bits/stdc++.h>
using namespace std;

unsigned long long reverseNumber(unsigned long long num) {
    unsigned long long rev = 0;
    while (num > 0) {
        rev = rev * 10 + (num % 10);
        num /= 10;
    }
    return rev;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        unsigned long long n;
        cin >> n;

        int cnt = 0;
        unsigned long long ri = reverseNumber(n); 

        while (n != ri) {
            n = n + ri;  
            cnt++;
            ri = reverseNumber(n); 

            if (cnt > 1000) { 
                cout << "Error: More than 1000 iterations" << endl;
                break;
            }
        }

        cout << cnt << " " << n << endl; 
    }

    return 0;
}
