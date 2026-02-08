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
    // your logic here
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;i < n; i++){
        cin >> arr[i];
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    int avg = sum / n;
    int moves = 0;
    for(int i = 0; i < n; i++){
        stack<int>arr[i];
        int cnt;
        while(!arr[i].empty()){
            arr[i].pop();
            cnt++;
        }
        if(arr[i].empty() && cnt == avg){
            moves++;
        }
    }
    cout << "The minimum number of moves is " << moves;
}

int main() {
#ifndef ONLINE_JUDGE
    auto start = chrono::high_resolution_clock::now();
    freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
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