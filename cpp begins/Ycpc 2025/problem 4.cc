#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cin.ignore();
        string s;
        getline(cin,s);
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        int cnt = 0;
        for(int i = 0; i < n; i++){
           if(s[i] == '1' && s[i + 1] == '0'){
            cnt++;
           }
        }
        cout << cnt << "\n";
    }
}