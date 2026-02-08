#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<int,int>m;
    vector<int>seq;
    set<int>tak;
    int num;
    while(cin >> num){
        m[num]++;
        if(tak.find(num) == tak.end()){
            seq.push_back(num);
            tak.insert(num);
        }
    }
    for(auto it : seq){
        cout << it << " " << m[it] << endl;
    }
}