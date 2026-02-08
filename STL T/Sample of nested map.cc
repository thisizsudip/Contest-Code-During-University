                                        /* example input : 3 test cases
                                         a b string inputs
                                         4   number of integer(n)
                                         1 2 3 4 integer according to n numbers
                                         c d  string inputs
                                         2   number of integer(n)
                                         1 2 integer according to n numbers
                                         d f  string inputs
                                         3   number of integer(n)
                                         2 3 4 integer according to n numbers
                                         */
#include<bits/stdc++.h>
using namespace std;                                      
int main(){
    map<pair<string, string>,vector<int> > m;
    int n;
    cin >> n;
    for(int i = 0; i < n; i ++){
        string fn, ln;
        int ct;
        cin >> fn >> ln >> ct;
        for(int j = 0; j < ct; j++){
            int x;
            cin >> x;
            m[{fn, ln}].push_back(x);
        }
    }
    for(auto &pr : m){
        auto &full_name = pr.first;
        auto &list = pr.second;
        cout << full_name.first << " " << full_name.second << endl;
        cout << list.size() << endl;
        for(auto &element : list){
            cout << element << " ";
        }
        cout << endl;
    }
}