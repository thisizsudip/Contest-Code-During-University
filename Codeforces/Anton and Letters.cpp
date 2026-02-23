#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<char>let;
    string s;
    //cin.ignore();
    getline(cin, s);
    s.erase(remove(s.begin(), s.end(), ','), s.end());
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    for(int i = 0; i < s.length(); i++){
        let.insert(s[i]);
    }
    //cout << s << endl;
    cout << let.size() - 2 << endl;
}