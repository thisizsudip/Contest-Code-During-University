#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int mid, int r){
    int s1 = mid - l + 1;
    int s2 = r - mid;
    int arr1[s1];
    int arr2[s2];

    for(int i = 0; i < s1; i++){
        arr1[i] = arr[l + i];
    }
    for(int i = 0; i < s2; i++){
        arr2[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = l;
    while(i < s1 && j < s2){
        if(arr1[i] < arr2[j]){
            arr[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr[k] = arr2[j];
            k++; 
            j++;
        }
    }
    while(i < s1){
        arr[k] = arr1[i];
        k++;
        i++;
    }
    while(j < s2){
        arr[k] = arr2[j];
        k++;
        j++;
    }
}

void merge_sort(int arr[], int l, int r){
    if(l < r){
        int mid = (l + r) / 2;
        merge_sort(arr, l, mid);
        merge_sort(arr, mid + 1, r);

        merge(arr, l,mid,r);
    }
}
int main(){
    int arr[5];
    srand(time(0));
    for(int i = 0; i < 5; i++){
        arr[i] = rand() % 100;
    }
    int l = 0, r = 4;
    merge_sort(arr, l, r);
    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}