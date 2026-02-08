#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n; 
    vector<string> words(n);
    for(int i = 0; i < n; i++){
        cin >> words[i];
    }
    int log_in = 1;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(words[i] == "login"){
            log_in = 0;
        }
        else if(words[i] == "logout"){
            log_in = 1;
        }
        if(words[i] == "private" && log_in == 1){
            cnt++;
        }
    }
    cout << cnt << endl;
}