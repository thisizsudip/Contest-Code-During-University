#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int s1, s2, s3;
    s1 = (n % 10);
    n = n / 10;
    s2 = n % 10;
    n = n / 10;
    s3 = n % 10;
    //cout << s1 << " " << s2 << " " << s3;
    if((s1 == s2) && (s2== s3)){
        cout << "Yes\n";
    }
    else{
        cout << "No\n";
    }
}