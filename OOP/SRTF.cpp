#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    vector<int> at(n), bt(n), remaining(n);
    vector<int> ct(n), tat(n), wt(n), rt(n);
    vector<bool> started(n, false);

    cout << "\nEnter Arrival Time:\n";
    for(int i = 0; i < n; i++){
        cout << "P" << i+1 << ": ";
        cin >> at[i];
    }

    cout << "\nEnter Burst Time:\n";
    for(int i = 0; i < n; i++){
        cout << "P" << i+1 << ": ";
        cin >> bt[i];
        remaining[i] = bt[i];
    }

    int completed = 0;
    int currentTime = 0;

    double totalWT = 0, totalTAT = 0, totalRT = 0;
    while(completed < n){
        int idx = -1;
        int minRemaining = INT_MAX;
        for(int i = 0; i < n; i++){
            if(at[i] <= currentTime && remaining[i] > 0){
                if(remaining[i] < minRemaining){
                    minRemaining = remaining[i];
                    idx = i;
                }
            }
        }

        if(idx == -1){
            currentTime++;
        }
        else{
            if(!started[idx]){
                rt[idx] = currentTime - at[idx];
                started[idx] = true;
            }

            remaining[idx]--;
            currentTime++;

            if(remaining[idx] == 0){
                ct[idx] = currentTime;
                tat[idx] = ct[idx] - at[idx];
                wt[idx] = tat[idx] - bt[idx];

                totalWT += wt[idx];
                totalTAT += tat[idx];
                totalRT += rt[idx];

                completed++;
            }
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
             << rt[i] << endl;
    }

    cout << fixed << setprecision(2);
    cout << "\nAverage Waiting Time: " << totalWT/n;
    cout << "\nAverage Turnaround Time: " << totalTAT/n;
    cout << "\nAverage Response Time: " << totalRT/n;

}