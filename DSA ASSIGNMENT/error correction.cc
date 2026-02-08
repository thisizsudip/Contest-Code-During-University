#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin >> n){
        if(n == 0){
            break;
        }
        int arr[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> arr[i][j];
            }
        }
        int rs = 0, br = 0, bc = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                rs += arr[i][j];
            }
        }
    }
}