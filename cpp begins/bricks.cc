#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, sum = 0, div = 0, cnt = 0;
    int c = 0;
    while(cin >> t){
        sum = 0; div = 0; cnt = 0;
        if(t == 0){
            break;
        }
        int arr[t];
        for(int i = 0; i < t; i++){
            cin >> arr[i];
            sum += arr[i];
        }
        div = sum / t;
        for(int i = 0; i < t; i++){
            if(arr[i] > div){
                cnt += arr[i] - div;
            }
        }
        c++;
        cout << "Set #" << c << endl;
        cout << "The minimum number of moves is " << cnt << "." << endl;
        cout << endl;
    }
}