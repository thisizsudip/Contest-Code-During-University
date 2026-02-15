#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "I hate it";
    string s2 = "I hate that ";
    string s3 = "I love it";
    string s4 = "I love that ";
    string s = "";
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        if((i + 1) % 2 == 0 && i != n - 1){
            s += s4;
        }
        else if((i + 1) % 2 == 0 && i == n - 1){
            s += s3;
        }
        else if((i + 1) % 2 != 0 && i == n - 1){
            s += s1;
        }
        else if((i + 1) % 2 != 0 && i != n - 1){
            s += s2;
        }
    }
    cout << s << endl;
}