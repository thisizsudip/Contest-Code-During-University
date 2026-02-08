#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int cnt = 0;
    while(cin >> n && n != 0){
        vector<int>vec(n);
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> vec[i];
            sum += vec[i];
        }
        int avg = sum / n;
        int m = 0;
        for(int i = 0; i < n; i++){
            if(vec[i] > avg){
                m += vec[i] - avg;
            }
        }
        cnt++;
        cout << "Set " << "#" << cnt << endl;
        cout << "The minimum number of moves is " << m << "." << endl;
        cout << endl;
    }
}