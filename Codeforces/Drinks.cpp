#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    double sum = 0;
    for(int i = 0; i < n; i++){
        sum += (arr[i] / 100);
    }
    //cout << sum << endl;
    cout <<fixed <<  setprecision(12);
    double result = (sum / n) * 100;
    cout << result  << "\n";
}