#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int cnt = 0;
    while(t--){
        cnt++;
        double r1, r2, r3;
        cin >> r1 >> r2 >> r3;
        double a, b, c, Area, area, anga, angb, angc, res, s;
        a = r1 + r2;
        b = r2 + r3;
        c = r3 + r1;
        s = (a + b + c) / 2.0;
        Area = sqrt(s * (s - a) * (s - b) * (s - c));
        anga = acos((- b * b + c * c + a * a)/ (2.0 * a * c));
        angb = acos(( b * b - c * c + a * a)/ (2.0 * a * b));
        angc = acos(( b * b + c * c - a * a)/ (2.0 * b * c));
        area = 0.5 * ((r1 * r1 * anga) + (r2 * r2 * angb) + (r3 * r3 * angc));
        res = Area - area;
        printf("Case %d: %.10lf\n", cnt, res);
    }
}