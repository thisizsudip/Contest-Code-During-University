#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;
    long long a, b;
    a = s[x - 1] - '0';
    b = s[y - 1] - '0';
    bool d = false;
    if(a > b && b != 0){
        if(a % b == 0){
            d = true;
        }
    }
    else if(b > a && a != 0){
        if(b % a == 0){
            d = true;
        }
    }
    else if(a == b){
        if(a!= 0 && a % b == 0){
            d = true;
        }
    }
    else{
        d = false;
    }
    if(d == true){
        cout << "YES\n" ; 
    }
    else{
        cout << "NO\n";
    }
    //cout << a << b;
}