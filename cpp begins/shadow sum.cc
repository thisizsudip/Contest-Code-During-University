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
        for(int i = 1; i < n; i++){
            for(int j = 0; j < n; j++){
                if(vec[i - 1] == vec[j] || vec[i - 1] == (-1) * vec[j]){
                    vec.erase(remove(vec.begin(), vec.end(), vec[i - 1]), vec.end());
                }
            }
        }
        for(int num : vec){
            cout << num << " ";
        }
    }
}