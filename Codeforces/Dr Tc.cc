#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s, s2;
        cin >> s;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            s2 = s;
            if(s2[i] == '0'){
                s2[i] = '1';
            }
            else{
                s2[i] = '0';
            }
            for(int i = 0; i < n; i++){
                if(s2[i] == '1'){
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
}