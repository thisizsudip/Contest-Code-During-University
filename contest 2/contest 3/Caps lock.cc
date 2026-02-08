#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    if(s[0] >= 'a' && s[0] <= 'z' && ){
        for(int i = 0; i < s.length(); i++){
            s[i] = tolower(s[i]);
        }
        cout << s;
    }
}