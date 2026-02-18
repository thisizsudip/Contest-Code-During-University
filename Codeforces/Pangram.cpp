#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<bool>seen(26, false);
    for(char c : s){
        if(isalpha(c)){
            seen[tolower(c) - 'a'] = true;
        }
    }
    bool ok = all_of(seen.begin(), seen.end(), [](bool x){return x;});
    if(ok){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}