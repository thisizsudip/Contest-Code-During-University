#include<bits/stdc++.h>
using namespace std;
int bs(int arr[],int n, int s){
    int left = 0;
    int right = n - 1;
    while(left <= right){
        int mid = left + (right - left) / 2;
        if(arr[mid] == s){
            return mid;
        }
        else if(s < arr[mid]){
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin >> n; 
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int s;
    cin >> s;
    int b = bs(arr,n,s);
    if(b == -1){
        cout << "item not found";
    }
    else{
        cout << b;
    }
}