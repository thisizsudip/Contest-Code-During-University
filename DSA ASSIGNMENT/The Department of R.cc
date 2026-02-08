#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> m;
    string s;
    while(cin >> s){
        m[s] = m[s] + 1;
    }
    for(auto pr : m){
        cout << pr.first << " " << pr.second << endl;
    }
}