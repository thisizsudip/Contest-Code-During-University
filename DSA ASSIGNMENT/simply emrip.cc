#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(cin >> n){
        string s;
        s = to_string(n);
        reverse(s.begin(), s.end());
        int n2 = stoi(s);
        int is_prime = 1;
        for(int i = 2, j = sqrt(n); i <= j; i++){
            if(n % i == 0){
                is_prime = 0;
                break;
            }
        }
        int is_prime2 = 1;
        for(int i = 2, j = sqrt(n2); i <= j; i++){
            if(n2 % i == 0){
                is_prime2 = 0;
                break;
            }
        }
        if(is_prime == 1 and is_prime2 == 1 and n != n2){
            cout << n << " is emirp." << endl;
        }
        else if(is_prime == 1 and is_prime2 == 0){
            cout << n << " is prime." << endl;
        }
        else if(is_prime == 1 and is_prime2 == 1 and n == n2){
            cout << n << " is prime." << endl;
        }
        else{
            cout << n << " is not prime." << endl;
        }
    
    }
}