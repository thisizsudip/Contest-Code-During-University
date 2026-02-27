#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.length();
    int cnt = 0;
    for(int i = 0; i < len; i++){
        if(s[i] == '0'){
            cnt++;
            if(cnt == 7){
                break;
            }
        }
        else if(s[i] == '1' && s[i - 1] != '1'){
            cnt = 0;
            cnt++;
        }
        else if(s[i] == '1'){
            cnt++;
            if(cnt == 7){
                break;
            }
        }
        else if(s[i] == '0' && s[i - 1] != '0'){
            cnt = 0;
            cnt++;
        }
    }
    cout << cnt << endl;
}