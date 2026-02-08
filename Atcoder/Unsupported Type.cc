#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n; 
    int arr[n];
    int flag = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int j;
    cin >> j;
    for(int i = 0; i < n; i++){
        if(arr[i] == j){
            flag = 1;
            break;
        }
        else{
            flag = 0;
        }
    }
    if(flag == 0){
        cout << "No" << endl;
    }
    else{
        cout << "Yes" << endl;
    }
}