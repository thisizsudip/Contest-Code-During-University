#include <bits/stdc++.h>
#include <chrono>
using namespace std;
typedef long long ll;
#define all(x) x.begin(), x.end()
#define endl '\n'

#define SHOW_CASE_NUM 0

void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}

void solve(int case_num) {
#if SHOW_CASE_NUM
    cout << "Case " << case_num << ": ";
#endif
   int n, m;
   cin >> n >> m;
   cin.ignore();
   string s;
   getline(cin, s);
   string s2;
   getline(cin, s2);
   s.erase(remove(s.begin(), s.end(), ' '), s.end());
   s2.erase(remove(s2.begin(), s2.end(), ' '), s2.end());
   for(int i = 0; i < m; i++){
    if(s[i] == s2[i])
    s.erase(s[i]);
    break;
   }
   cout << s << endl;
}

int main() {
#ifndef ONLINE_JUDGE
    auto start = chrono::high_resolution_clock::now();
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
#endif

    fast_io();
    int tc = 1;
    //cin >> tc;
    int t = 1;
    while (t <= tc) {
        solve(t);
        t++;
    }

#ifndef ONLINE_JUDGE
    auto end = chrono::high_resolution_clock::now();
    cerr << "\nTime: " << chrono::duration_cast<chrono::milliseconds>(end - start).count() << " ms" << endl;
#endif

    return 0;
}