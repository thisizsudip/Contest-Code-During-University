#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0, count2 = 0;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < n; i++){
        if(s[i] == 'A'){
            count++;
        }
        else{
            count2++;
        }
    }
    if(count > count2){
        cout << "Anton" << endl;
    }
    else if(count < count2){
        cout << "Danik" << endl;
    }
    else{
        cout << "Friendship" << endl;
    }
}