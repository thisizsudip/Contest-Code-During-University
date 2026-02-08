#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n2;
    cin >> t;
    int arr[t];
    for(int i = 1; i <= t; i++){
        cin >> arr[i];
        }
        for(int i = 1; i <= t; i++){
            n2 = sqrt(arr[i]);
            bool is_prime = true;
            if(n2 <= 1){
            is_prime = false;
        }
            else{
            for(int i = 2, j = sqrt(n2); i <= j; i++){
                if(n2 % i == 0){
                    is_prime = false;
                    break;
                }
            }
        }
        if(is_prime){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
}