#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin >> n){
        int sum = 0;
        if(n == 0){
            break;
        }
        for(int i = 1; i <= n; i++){
            int a;
            cin >> a;
            sum += a;
            cout << sum << endl;
        }
        if(sum % n == 0){
            int avg = sum / n;
            if(avg > 0){
                cout << avg << endl;
            }
            else{
                cout << "- " << abs(avg) << endl;
            }
            else if(sum % n > 0){
                
            }
        }
    }
}