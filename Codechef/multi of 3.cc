#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x;
    if(n % 3 == 1){
        x = n - 1;
        cout << x << endl;
    }
    else if(n % 3 == 2){
        x = n + 1;
        cout << x << endl;
    }
    else{
        cout << n << endl;
    }
}