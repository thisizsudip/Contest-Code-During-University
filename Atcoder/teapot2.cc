#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    auto ft = find(s.begin(), s.end(), 't');
    auto lt = find(s.rbegin(), s.rend(), 't');
    if(ft != s.end() && lt != s.rend() && ft < lt.base()){
        s = string(ft, lt.base());
        long double res;
        double c = count(s.begin(), s.end(), 't');
        double l = s.length();
        res = (c - 2) / (l - 2);
        cout << fixed << setprecision(17) << res << endl;
    }
    else{
        s.clear();
        cout << "0.00000000000000000" << endl;
    }
}