#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n+1], pos[n+1];
    
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        pos[a[i]] = i;  
    }
    
    int m;
    cin >> m;
    long long v = 0, p = 0;
    
    while(m--) {
        int x;
        cin >> x;
        v += pos[x];
        p += (n - pos[x] + 1);
    }
    
    cout << v << " " << p << "\n";
}
