#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int sum = a + b + c;
        int x = sum / 3;
        if(sum % 3 != 0){
            cout << "NO" << endl;
        }
        else if(sum % 3 == 0 && x >= a && x >= b && x <= c){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}