#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    multiset<string>polygons;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        polygons.insert(s);
    }
    string s1 = "Tetrahedron", s2 = "Cube", s3 = "Octahedron", s4 = "Dodecahedron", s5 = "Icosahedron";
    int ans = 0;
    for(auto it : polygons){
        if(it == s1){
            ans += 4;
        }
        else if(it == s2){
            ans += 6;
        }
        else if(it == s3){
            ans += 8;
        }
        else if(it == s4){
            ans += 12;
        }
        else{
            ans += 20;
        }
    }
    cout <<  ans << endl;

}