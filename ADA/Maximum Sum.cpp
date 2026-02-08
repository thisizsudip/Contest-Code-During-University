#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while(t--){
        long long sum;
        long long n, k;
        cin >> n >> k;
        long long arr[n];
        vector<long long>v(n);
        vector<long long>temp1(n);
        vector<long long>temp2(n);
        vector<long long>temp3(n);
        vector<long long>temp4(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        temp1 = v;
        temp2 = v;
        temp3 = v;
        temp4 = v;
        sort(v.begin(), v.end());
        long long min_min = 0;
        long long min_max = 0;
        long long max_min = 0;
        long long max_max = 0;
        for(int i = 0; i < k; i++){
            sort(temp1.begin(), temp1.end());
            temp1.erase(temp1.begin(), temp1.begin() + 2);
            sort(temp2.begin(), temp2.end());
            temp2.erase(temp2.end());
            sort(temp3.begin(), temp3.end());
            if((i + 2) % 2 == 0){
                temp3.erase(temp3.begin(), temp3.begin() + 2);
            }
            else{
                temp3.erase(temp3.end());
            }
            sort(temp4.begin(), temp4.end());
            if((i + 1) % 2 != 0){
                temp4.erase(temp4.begin(), temp4.begin() + 2);
            }
            else{
                temp4.erase(temp4.end());
            }
        }
        for(int i = 0; i < temp1.size(); i++){
            //cout << temp1[i] << " ";
            min_min += temp1[i];
        }
        //cout << endl;
        //cout << min_min << endl;
        for(int i = 0; i < temp2.size(); i++){
            //cout << temp2[i] << " ";
            max_max += temp2[i];
        }
        //cout << endl;
        //cout << max_max << endl;
        for(int i = 0; i < temp3.size(); i++){
            //cout << temp3[i] << " ";
            max_min += temp3[i];
        }
        //cout << endl;
        //cout << max_min << endl;
        for(int i = 0; i < temp4.size(); i++){
            //cout << temp4[i] << " ";
            min_max += temp4[i];
        }
        //cout << endl;
        //cout << min_max << endl;
        if((min_min >= max_max) && (min_min >= max_min) && (min_min >= min_max)){
            cout << min_min << "\n";
        }
        else if((max_max >= min_min) && (max_max >= max_min) && (max_max >= min_max)){
            cout << max_max << "\n";
        }
        else if((max_min >= max_max) && (max_min >= min_min) && (max_min >= min_max)){
            cout << max_min << "\n";
        }
        else{
            cout << min_max << "\n";
        }
    }
}