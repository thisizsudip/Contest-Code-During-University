#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,string>a, pair<int,string>b){
    return a.first < b.first;
}
int main()
{
    int M;
    string s;
    int m, n;
    cin >> M;
    while(M--){
        cin >> n >> m;
        vector<pair<int,string>>dna(m);
        for(int k = 0; k < m; k++){
            cin >> s;
            int v = 0;
            for(int i = 0; i < n - 1; i++){
                for(int j = i + 1; j < n; j++){
                    if(s[i] > s[j]){
                        v++;
                    }
                }
            }
            dna[k] = {v, s};
        }
        stable_sort(dna.begin(), dna.end(), comp);
        for(int i = 0; i < m; i++){
            cout << dna[i].second << endl;
        }
            if(M){
                cout << endl;
            }
    }
}