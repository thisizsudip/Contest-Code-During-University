#include<bits/stdc++.h>
using namespace std;
int input_array(int arr[], int n){
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    input_array(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}