#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, s2;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), [](unsigned char c){
        return tolower(c);
    });
    if(s[0] != "a" || s[0] != "e" || s[0] != "e" || s[0] != "i" || s[0] != "o" || s[0] != "u"){
        s = '.' + s;
    }
    for(int i = 0; i < s.length(); i++){
        if(s[i] == "a" || s[i] == "e" || s[i] == "e" || s[i] == "i" || s[i] == "o" || s[i] == "u"){
            s.erase(remove(s.begin(), s.end(), s.end()));
            s[i] = '.' + s[i];
        }
    }
    cout << s;
}