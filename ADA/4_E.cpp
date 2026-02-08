#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, w, i, j;
    while (cin >> t >> w) {
        int n;
        if (!(cin >> n)) break;

        int d[n + 1], v[n + 1], cost[n + 1];
        for (i = 1; i <= n; i++) {
            cin >> d[i] >> v[i];
            cost[i] = 3 * w * d[i]; 
        }

        int dp[n + 1][t + 1];

        for (i = 0; i <= n; i++)
            dp[i][0] = 0;
        for (j = 0; j <= t; j++)
            dp[0][j] = 0;

        for (i = 1; i <= n; i++) {
            for (j = 1; j <= t; j++) {
                if (cost[i] <= j)
                    dp[i][j] = max(v[i] + dp[i - 1][j - cost[i]], dp[i - 1][j]);
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }

        int maxGold = dp[n][t];
        cout << maxGold << "\n";

        int rem = t;
        vector<pair<int,int>> chosen;
        for (i = n; i >= 1; i--) {
            if (dp[i][rem] != dp[i - 1][rem]) {
                chosen.push_back({d[i], v[i]});
                rem -= cost[i];
            }
        }

        cout << chosen.size() << "\n";
        for (i = chosen.size() - 1; i >= 0; i--) {
            cout << chosen[i].first << " " << chosen[i].second << "\n";
        }
        cout << "\n";
    }

    return 0;
}