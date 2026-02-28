#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>vec(n);
        for(int i = 0; i < n; i++){
            cin >> vec[i];
        }
        auto it = max_element(vec.begin(), vec.end());
        int mx_val = *it;
        int freq = count(vec.begin(), vec.end(), mx_val);
        cout << freq << "\n";

    }
}