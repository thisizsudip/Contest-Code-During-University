#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    int res = 0;
    string s;
    cin >> num;
    while(num--){
        cin >> s;
        if(s == "++X" || s == "X++"){
            res ++;
        }
        else{
            res--;
        }
    }
    cout << res;
}           