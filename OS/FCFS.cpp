#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;

    vector<int> at(n), bt(n);
    vector<int> ct(n), wt(n), tat(n), rt(n);

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
    double totalWT = 0, totalTAT = 0, totalRT = 0;

    for(int i = 0; i < n; i++){
        if(currentTime < at[i]){
            currentTime = at[i];
        }
        

        int startTime = currentTime;

        ct[i] = currentTime + bt[i];
        tat[i] = ct[i] - at[i];
        wt[i] = tat[i] - bt[i];
        rt[i] = startTime - at[i];

        currentTime = ct[i];

        totalWT += wt[i];
        totalTAT += tat[i];
        totalRT += rt[i];
    }

    cout << "\nProcess\tAT\tBT\tCT\tWT\tTAT\tRT\n";
    for(int i = 0; i < n; i++){
        cout << "P" << i+1 << "\t"
             << at[i] << "\t"
             << bt[i] << "\t"
             << ct[i] << "\t"
             << wt[i] << "\t"
             << tat[i] << "\t"
             << rt[i] << endl;
    }

    cout << fixed << setprecision(2);
    cout << "\nAverage Waiting Time: " << totalWT/n;
    cout << "\nAverage Turnaround Time: " << totalTAT/n;
    cout << "\nAverage Response Time: " << totalRT/n;

}