#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    float res = 400 / a;
    if((res * a) > 400 || (res * a) < 400){
        cout << "-1" << endl;
    }
    else{
        cout << res << endl;
    }
}