#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, cnt = 0;
    cin >> t;
    cin.ignore();
    while(t--){
        cnt++;
        string u, j;
        getline(cin, u);
        getline(cin, j);
        int l1, l2;
        l1 = u.length();
        l2 = j.length();
        u.erase(remove(u.begin(), u.end(), ' '), u.end());
        if(u == j && l1 == l2){
            cout << "Case " << cnt << ": Yes" << endl;
        }
        else if(u == j && l1 != l2){
            cout << "Case " << cnt << ": " << "Output Format Error" << endl;
        }
        else{
            cout << "Case " << cnt << ": Wrong Answer" << endl;
        }
    }
}