#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string s;
        string s1 = "";
        getline(cin, s);
        int len = s.length();
        for(int i = 0; i < s.length(); i++){
            if(s[i] == ' '){
                s1 = s1 + s[i + 1];
            }
        }
        cout <<  s[0] + s1 << endl;
    }
}