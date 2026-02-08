#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


long long limit = 1e6;
vector<bool> is_prime(limit + 1, true);


void Sieve(){
    is_prime[0] = is_prime[1] = false;
    for(int i = 2; i * i <= limit; i++ ){
        if(is_prime[i] && (long long) i * i <= limit){
            for(int j = i * i; j <= limit; j += i)
            is_prime[j] = false;
        }
    }
}


int main(){
    optimize();
    Sieve();

    int t; 
    cin >> t;
    while(t--){
        long long m;
        cin >> m;
        long long tp = sqrt(m);
        if(tp * tp == m  && is_prime[tp]){
        cout  << "YES" << "\n" ;
    }
        else
        cout << "NO" << "\n";
    }
}