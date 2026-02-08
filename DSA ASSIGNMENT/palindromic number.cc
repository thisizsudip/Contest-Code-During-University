#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   for(int i = 1; i <= t; i++){
    int num1 , num2;
    cin >> num1;
    int temp = num1;
    num2 = 0;
    while(temp > 0){
        num2 = num2 * 10 + (temp % 10);
        temp = temp / 10;
    }
    if(num1 == num2 || num1 == 0){        
        cout << "Case " << i << ": Yes" << endl;
    }
    else{
        cout << "Case " << i << ": No" << endl;
    }
   }
}