#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    c = -c;
    d = -d;
    int res = a + c;
    int res2 = b + d;
    cout << res << " " << res2 << endl;
}