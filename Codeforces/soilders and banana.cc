#include<bits/stdc++.h>
using namespace std;
int main()
{
   int k,n,w,res = 0;
   cin >> k >> n >> w;
   for(int i = 1; i <= w; i++){
   res = res + i * k;
   }
   int out = res - n;
   if(out < 0){
    cout << "0" << endl;
   }
   else{
    cout << out<< endl;
   }   
}