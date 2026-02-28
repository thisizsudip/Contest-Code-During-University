#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>vec(n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> vec[i];
        sum += vec[i];
    }
    //cout << sum << endl;
    sort(vec.begin(), vec.end());
    int cnt = 0;
    int sum2 = 0;
    for(int i = n - 1; i >= 0; i--){
        sum2 += vec[i];
        if(sum2 > sum - sum2){
            cnt++;
            break;
        }
        else{
            cnt++;
        }
    }
    cout << cnt << "\n";
}