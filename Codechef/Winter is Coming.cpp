#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int temp, a, b;
        cin >> temp >> a >> b;
        int arr[temp];
        for(int i = 0;  i < temp; i++){
            cin >> arr[i];
        }
        int cnt = 0;
        bool wearing = false;
        for(int i = 0; i < temp; i++){
            if(arr[i] < a){
                if(!wearing){
                    cnt++;
                    wearing = true;
                }
            }
            else if(arr[i] > b){
                wearing = false;
            }
        }
        cout << cnt << endl;
    }
}