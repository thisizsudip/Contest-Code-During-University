#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t = 1;
    string s;
    while(cin >> s){
        if(s == "*"){
            break;
        }
        else if(s == "Hajj"){
            cout << "Case " << t << ": Hajj-e-Akbar" << endl;
        }
        else if(s == "Umrah"){
            cout << "Case " << t << ": Hajj-e-Asghar" << endl;
        }
        t++;
    }
}