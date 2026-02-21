#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    auto maxit = max_element(arr.begin(), arr.end());
    int maxidx = maxit - arr.begin();

    auto minit = min_element(arr.begin(), arr.end());
    int minidx = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] <= arr[minidx]){
            minidx = i;   
        }
    }
    
    int sfmx = maxidx;
    int sfmin = (n - 1) - minidx;

    int t_swaps;
    if(maxidx > minidx){
        t_swaps = (sfmx + sfmin) - 1;
    }
    else{
        t_swaps = (sfmx + sfmin);
    }
    cout << t_swaps << endl;
}