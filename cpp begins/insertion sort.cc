#include<bits/stdc++.h>
using namespace std;
int isort(int arr[], int n){
    for(int i = 0; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    return 0;
}
int main(){
    int arr[5];
    int n = 5;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    isort(arr,n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}