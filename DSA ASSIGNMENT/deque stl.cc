#include <iostream>
#include <deque>
#include <vector>
using namespace std;

void printMaxInSubarrays(vector<int>& arr, int k) {
    deque<int> dq;  // stores indices of useful elements
    int n = arr.size();

    for (int i = 0; i < n; ++i) {
        // Remove indices out of the current window
        if (!dq.empty() && dq.front() <= i - k)
            dq.pop_front();

        // Remove elements smaller than current from the back
        while (!dq.empty() && arr[i] >= arr[dq.back()])
            dq.pop_back();

        dq.push_back(i);  // Add current element index

        // Starting from index (k-1), print max of each window
        if (i >= k - 1)
            cout << arr[dq.front()] << " ";
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        printMaxInSubarrays(A, K);
    }

    return 0;
}
