#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> m;
    string s;

    // Read words until EOF
    while (cin >> s) {
        m[s]++;
    }

    // Print word frequencies
    for (auto pr : m) {
        cout << pr.first << " " << pr.second << endl;
    }

    return 0;
}
