#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    char grid[40][40];
    int start_r = -1, start_c = -1;
    int end_r = -1, end_c = -1;

    for(int i = 0; i < n; i++){
        string line;
        cin >> line;
        for(int j = 0; j < n; j++){
            grid[i][j] = line[j];
            if(grid[i][j] == '@'){
                start_r = i;
                start_c = j;
            } 
            else if (grid[i][j] == 'X'){
                end_r = i;
                end_c = j;
            }
        }
    }

    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};

    bool visited[40][40] = {false};
    int parent_r[40][40] = {-1};
    int parent_c[40][40] = {-1};

    queue<pair<int, int>> q;
    q.push({start_r, start_c});
    visited[start_r][start_c] = true;

    bool found = false;
    while(!q.empty()){
        int r = q.front().first;
        int c = q.front().second;
        q.pop();

        if(r == end_r && c == end_c){
            found = true;
            break;
        }

        for(int d = 0; d < 4; d++){
            int nr = r + dr[d];
            int nc = c + dc[d];
            if(nr >= 0 && nr < n && nc >= 0 && nc < n && !visited[nr][nc] &&
                (grid[nr][nc] == '.' || grid[nr][nc] == 'X' || grid[nr][nc] == '@')){
                q.push({nr, nc});
                visited[nr][nc] = true;
                parent_r[nr][nc] = r;
                parent_c[nr][nc] = c;
            }
        }
    }

    if(found){
        cout << "Y" << endl;
        int curr_r = end_r, curr_c = end_c;
        while(!(curr_r == start_r && curr_c == start_c) && (parent_r[curr_r][curr_c] != -1 || parent_c[curr_r][curr_c] != -1)){
            grid[curr_r][curr_c] = '+';
            int next_r = parent_r[curr_r][curr_c];
            int next_c = parent_c[curr_r][curr_c];
            curr_r = next_r;
            curr_c = next_c;
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << grid[i][j];
            }
            cout << endl;
        }
    } 
    else{
        cout << "N" << endl;
    }
    
}