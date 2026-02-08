#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
   cin >> n >> m;
   cin.ignore();
   string s;
   getline(cin, s);
   string s2;
   getline(cin, s2);
   s.erase(remove(s.begin(), s.end(), ' '), s.end());
   s2.erase(remove(s2.begin(), s2.end(), ' '), s2.end());
   int j = 0, i = 0;
   while(s2.size() != 0 && s.size() != 0){
    if(s[i] == s2[j]){
        s.erase(s.begin() + i);
        j++;
        }
        else{
            i++;
        }
   }
   for(int i = 0; i < s.size() - 1; i++){
    cout << s[i] << " ";
   }
}
