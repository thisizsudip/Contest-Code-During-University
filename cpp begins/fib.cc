#include<bits/stdc++.h>
using namespace std;
int fib(int n, int res){
    res = 0;
    int n1 = 0;
    int n2 = 1;
    if(n == 0){
        cout << "0";
    }
    else if(n ==1){
        cout << n1 << " " << n2;
    }
    else{
    cout << n1 << " "<< n2 << " "; 
    while(n --){
        res = n1 + n2;
        
        cout << res << " ";
        n1 = n2;
        n2 = res;
    }
    }
    return 0;
}
int main()
{
    int n, res;
    cin >> n;
    fib(n,res);

}