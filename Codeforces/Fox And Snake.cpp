#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    
    bool right = true;
    for(int i = 1; i <= n; i++){
        if(i % 2 != 0){
            for(int j = 1; j <= m; j++){
                cout << "#";
            }
            cout << "\n";
            
        }
        else{
            if(i % 2 == 0 && i % 4 != 0){
                for(int i = 1; i < m; i++){
                    cout << ".";
                }
                cout << "#\n";
            }
            else{
                cout << "#";
                for(int j = 1; j < m; j++){
                    cout << ".";
                }
                cout << "\n";
            }
        }
    }
}