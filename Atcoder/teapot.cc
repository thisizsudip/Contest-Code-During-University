#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    string s2 = "tea";
    if(s == s2){
        cout <<  "Yes" << endl;
    }
    else if(n < 3){
        cout << "No" << endl;
    }
    else if(n > 3){
        s.erase(0, s.size() - 3);
        //cout << s;
        if(s == s2){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}