#include<bits/stdc++.h>
using namespace std;
void fib(int n, int res){
    res = 0;
    int n1 = 0;
    int n2 = 1;
    for(int i =1; n > res; ++i){
        res = n1 + n2;
        if(res > n){
            break;
        }
        cout << res << " ";
        n1 = n2;
        n2 = res;
    }
}
int main()
{
    int n, res;
    cin >> n;
    fib(n,res);
    return 0;
}