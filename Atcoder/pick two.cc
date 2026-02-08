#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    int sl = s.length();
    for(int i = 0; i < sl; i++){
        int j;
        if(s[i] == '#'){
            if(s[i] == '#' && cnt == 1){
                cout << j << "," << i + 1 << endl;
                cnt = 0;
            }
            else{
                cnt++;
                j = i + 1;
            }
        }
    }
}