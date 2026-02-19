#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin >> n;
    int p, q;
    cin >> p;
    set<int>s1;
    for(int i = 0; i < p; i++){
        int temp;
        cin >> temp;
        s1.insert(temp);
    }
    cin >> q;
    for(int i = 0; i < q; i++){
        int temp;
        cin >> temp;
        s1.insert(temp);
    }
    
    if(s1.size() == n){
        cout << "I become the guy.\n";
    }
    else{
        cout << "Oh, my keyboard!\n";
    }
}+