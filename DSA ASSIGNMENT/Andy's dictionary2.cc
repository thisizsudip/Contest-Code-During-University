#include <bits/stdc++.h>
using namespace std;

int main() {
    set<string> dic;
    string line;
    while (getline(cin, line)) {
        string word;
        for (auto it : line) {
            if (isalpha(it)) {
                word += tolower(it);
            } else if (!word.empty()) {
                dic.insert(word);
                word.clear();
            }
        }
        if (!word.empty()) { 
            dic.insert(word);
        }
    }

    for (auto it : dic) {
        cout << it << endl;
    }

    return 0;
}
