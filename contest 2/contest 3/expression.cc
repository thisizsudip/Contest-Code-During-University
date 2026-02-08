#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    int d,e,f, g, h;
    d = (a + b) * c;
    e = a * (b + c);
    f = a + (b * c);
    g = (a * b * c);
    h = (a + b + c);
    if(d >= e && d >= f && d >= g && d >= h){
        cout << d;
    }
    else if(e >= d && e >= f && e >= g && e >= h){
        cout << e;
    }
    else if(f >= d && f >= e && f >= g && f >= h){
        cout << f;
    }
    else if(h >= d && h >= e && h >= f && h >= g){
        cout << h;
    }
    else{
        cout << g;
    }
}