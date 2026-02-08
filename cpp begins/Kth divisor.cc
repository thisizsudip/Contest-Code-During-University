#include<bits/stdc++.h>
using namespace std;
vector<long long> value(long long n){
    vector<long long> Nod;
    for(long long i = 1; i * i <= n; i++){
        if(n % i == 0){
            Nod.push_back(i);
            if(i != n / i){
                Nod.push_back(n / i);
            }
        }
    }
    sort(Nod.begin(), Nod.end());
    return Nod;
}
    int main(){
    long long n;
    cin >> n;
    long long k;
    cin >> k;
    vector<long long> Nod = value(n);
    if(k > Nod.size()){
        cout << -1 << endl;
    }
    else{
        cout << Nod[k - 1] << endl;
    }
}