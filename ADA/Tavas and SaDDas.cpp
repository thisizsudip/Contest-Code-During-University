#include <bits/stdc++.h>
using namespace std;

int main() 
{
    queue<long long> q;
    vector<long long> lucky;

    q.push(4);
    q.push(7);

    while(!q.empty()){
        long long x = q.front();
        q.pop();
        if(x > 1000000000){
            continue;
        }
        lucky.push_back(x);
        q.push(x * 10 + 4);
        q.push(x * 10 + 7);
    }

    sort(lucky.begin(), lucky.end());
    long long num;
    cin >> num;
    auto it = find(lucky.begin(), lucky.end(), num);
    long long index = (it - lucky.begin()) + 1;
    cout << index << endl;  
}