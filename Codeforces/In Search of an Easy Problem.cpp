#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[3];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    bool easy = true;
    for(int i = 0; i < n; i++){
        if(arr[i] == 1){
            easy = false;
        }
    }
    if(easy == true){
        cout << "EASY\n";
    }
    else{
        cout << "HARD\n";
    }
}