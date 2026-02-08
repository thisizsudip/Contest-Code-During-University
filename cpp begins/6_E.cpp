#include<bits/stdc++.h>
using namespace std;

void dfs(int start, int day_left, int &ans);

const int MAX_TOTAL = 51;
vector<vector<int>>graph(MAX_TOTAL);
vector<bool>visited(MAX_TOTAL);
int n, k, a, b, d;


int main()
{
    cin >> n >> k >> a >> b >> d;
    for(int i = 0; i < k; i++){
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
    }

    int ans = 0;
    dfs(a, 0, ans);
    cout << ans << "\n";
}

void dfs(int start, int day_left, int &ans){
    if(start == b){
        ans++;
        return;
    }

    if(day_left >= d){
        return;
    }

    visited[start] == true;
    for(int it : graph[start]){
        if(!visited[it]){
            dfs(it, day_left + 1, ans);
        }
    }

    visited[start] = false;
}