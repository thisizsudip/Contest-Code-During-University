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

ll big_mod(ll b, ll p, ll m){
    if(p == 0){
        return 1;
    }
    if(p % 2 == 0){
        ll res = big_mod(b, p / 2, m);
        return ((res % m) * (res % m)) % m;
    }
    else return ((b % m) * big_mod(b, p - 1, m) % m) % m;
}

void solve(int case_num) {
#if SHOW_CASE_NUM
    cout << "Case " << case_num << ": ";
#endif
    ll b,p,m;
    while(cin >> b >> p >> m){
        cout << big_mod(b,p,m) << '\n';
    }
}

int main() {
#ifndef ONLINE_JUDGE
    auto start = chrono::high_resolution_clock::now();
    //freopen("input.txt", "r", stdin);
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