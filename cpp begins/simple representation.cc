#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n;
        cin >> n;
        string s1;
        for(int i = 1; i <= n; i++){
            string temp = s;
            s1 = s1 + s;
            s = temp;
        }
        long long n1 = stoi(s1);
        int is_prime = 1;
        for(long long i = 2, j = sqrt(n1); i <= j; i++){
            if(n1 % i == 0){
                is_prime = 0;
                break;
            }
        }
        if(is_prime == 0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}