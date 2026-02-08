#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int arr[k];
    for(int i = 0; i < k; i++){
        cin >> arr[i];
    }
    string str ="";
    for(int i = 1; i <= n; i++){
        if((i % arr[0] == 0) || (i % arr[1] == 0) || (i % arr[2] == 0)){
            str = str + "W";
        }
        else if((i - arr[0] != arr[0]) || (i - arr[0] != arr[1]) || (i - arr[0] != arr[2])){
            str = str + "W";
        }
        else if((i - arr[1] != arr[0]) || (i - arr[1] != arr[1]) || (i - arr[1] != arr[2])){
            str = str + "W";
        }
        else if((i - arr[2] != arr[0]) || (i - arr[2] != arr[1]) || (i - arr[2] != arr[2])){
            str = str + "W";
        }
        else{
            str = str + "L";
        }
    }
    cout << str << endl;
}