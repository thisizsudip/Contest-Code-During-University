#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr(4);
    for(int i = 0; i <= 3; i++){
        cin >> arr[i];
    }
    int cnt = 0;
    sort(arr.begin(), arr.end());
    for(int i = 0; i < 3; i++){
        if(arr[i] == arr[i + 1]){
            cnt++;
        }
        //cout << arr[i] << " ";
    }
    //cout << endl;
    cout << cnt << endl;
}