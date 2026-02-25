#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n, m, d;
        cin >> n >> m >> d;
        int w = 0;
        int count = 0;
        int temp = n;
        if(n * m <= d){
            cout << 1 << endl;
        }
        else if(n * m > d &&  d / m == 0){
            cout << n << endl;
        }
        else{
            
            while(n > 0){
                int item = (d / m);
                if(m * item <= d){
                    n = (n - item) -1;
                    count++; 
                }
            }
            cout << count << endl;
            //if(m * item <= )
        }
    }
}