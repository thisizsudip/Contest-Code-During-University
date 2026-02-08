#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, cnt = 0;
    cin >> t;
    while(t--){
        cnt++;
        string s;
        cin >> s;
        if(s[4] == 's'){
            cout << "Case " << cnt << ": " << s << endl;
        }
        else{
            string s1 = "s";
            s = s.insert(4, "s");
            cout << "Case " << cnt << ": " << s << endl;
        }
    }
}