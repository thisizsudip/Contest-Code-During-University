#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int l = s1.length();
    cout << l << "\n";
    string s = "";
    for(int i = 0; i < l; i++){
        if(s1[i] == s2[i]){
            s += '0';
        }
        else{
            s += '1';
        }
    }
    cout << s << endl;
}