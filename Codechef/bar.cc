#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int sl;
        cin >> sl;
        string s;
        cin >> s;
        int g, b;
        for(int i = 0; i < 8; i++){
            if(s[i] == 'G'){
                g++;
            }
            if(s[0] == 'B'){
                cout << "1" << endl;
                break;
            }
            else if(s[i] == 'B'){
                b++;
            }
            if(2 * g == b || 2 * g < b ){
                cout << g + b << endl;
                break;
            }
        }
    }
}