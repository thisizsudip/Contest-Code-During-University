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
    ll n;
    cin >> n;
    bool nc = false;
    ll a = 1, b = cbrt(n), s = 0;
    while(a <= b){
        s = pow(a, 3) + pow(b, 3);
        if(s == n){
            nc = true;
            break;
        }
        else if(s > n){
            b--;
        }
        else{
            a++;
        }
    }
    if(nc == true){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }

}

int main() {
#ifndef ONLINE_JUDGE
    auto start = chrono::high_resolution_clock::now();
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif

    fast_io();
    int tc = 1;
    cin >> tc;
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