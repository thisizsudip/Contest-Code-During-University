#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin >> s;
    cin >> t;
    int l = s.length();
    int l2 = t.length();
    for(int i = 0; i <= l; i++){
        s[i] = tolower(s[i]);
    }
    for(int i = 0; i <= l2; i++){
        t[i] = tolower(t[i]);
    }
    if(s == t){
        cout << "20/20" << endl;
    }
    else{
        cout << "x_x" << endl;
    }
}