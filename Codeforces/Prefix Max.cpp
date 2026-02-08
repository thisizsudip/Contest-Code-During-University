#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        auto it = max_element(arr.begin(), arr.end());
        int maxValue = *it;
        int index = it - arr.begin();
        swap(arr[index], arr[0]);
        long long sum = 0;
        int currentMax = INT_MIN;
        for (int i = 0; i < arr.size(); i++){
            currentMax = max(currentMax, arr[i]);
            sum += currentMax;
        }
        cout << sum << endl;
    }
}