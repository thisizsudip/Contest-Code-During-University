#include<bits/stdc++.h>
using namespace std;
map<int, int> factors;

void prime_factorize(int n)
{
    while(n % 2 == 0){
        factors[2]++;
        n = n / 2;
    }
    for(int p = 3; p + p <= n; p += 2){
        while(n % p == 0){
            factors[p]++;
            n = n / p;
        }
    }
    if(n > 1) factors[n]++;
}

int main()
{
    int n;
    while((cin >> n) and n){
        factors.clear();
        prime_factorize(abs(n));
        cout << n << " = ";
    }
    for(auto)
}