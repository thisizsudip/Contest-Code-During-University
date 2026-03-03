#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    vector<int> at(n), bt(n);
    vector<int> ct(n), tat(n), wt(n), rt(n);
    vector<bool> completed(n, false);

    cout << "\nEnter Arrival Time:\n";
    for(int i = 0; i < n; i++){
        cout << "P" << i+1 << ": ";
        cin >> at[i];
    }

    cout << "\nEnter Burst Time:\n";
    for(int i = 0; i < n; i++){
        cout << "P" << i+1 << ": ";
        cin >> bt[i];
    }

    int currentTime = 0;
    int completedCount = 0;

    double totalWT = 0, totalTAT = 0, totalRT = 0;

    while(completedCount < n) {

        int idx = -1;
        int minBT = INT_MAX;
        for(int i = 0; i < n; i++){
            if(!completed[i] && at[i] <= currentTime){
                if(bt[i] < minBT){
                    minBT = bt[i];
                    idx = i;
                }
                else if(bt[i] == minBT){
                    if(at[i] < at[idx]){
                        idx = i;
                    }
                }
            }
        }

        
        if(idx == -1){
            currentTime++;
        }
        else{
            int startTime = currentTime;

            ct[idx] = currentTime + bt[idx];
            tat[idx] = ct[idx] - at[idx];
            wt[idx] = tat[idx] - bt[idx];
            rt[idx] = startTime - at[idx];

            currentTime = ct[idx];

            completed[idx] = true;
            completedCount++;

            totalWT += wt[idx];
            totalTAT += tat[idx];
            totalRT += rt[idx];
        }
    }

    cout << "\nProcess\tAT\tBT\tCT\tTAT\tWT\tRT\n";

    for(int i = 0; i < n; i++){
        cout << "P" << i+1 << "\t"
             << at[i] << "\t"
             << bt[i] << "\t"
             << ct[i] << "\t"
             << tat[i] << "\t"
             << wt[i] << "\t"
             << rt[i] << "\n";
    }

    cout << fixed << setprecision(2);
    cout << "\nAverage Waiting Time: " << totalWT/n;
    cout << "\nAverage Turnaround Time: " << totalTAT/n;
    cout << "\nAverage Response Time: " << totalRT/n;

}