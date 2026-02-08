#include<bits/stdc++.h>
using namespace std;
int main()
{
    string t, s;
    cin >> t >> s;
    string reversed_string;
    for(int i = s.length() - 1; i >= 0; i--){
        reversed_string = reversed_string + s[i];
    }
    if(reversed_string == t){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}