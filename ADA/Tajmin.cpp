#include <bits/stdc++.h>
using namespace std;
int d[35], g[35];
int dp[35][1000];

int f(int n, int cap, int w)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= cap; j++)
        {
            if (i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else
            {
                int total_time = 3 *w * d[i];
                if (total_time <= j)
                {
                    dp[i][j] = max(dp[i - 1][j], g[i] + dp[i - 1][j - total_time]);
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
    }
    return dp[n][cap];
}

int main()
{
    int t, w, n;
    int T;
    while (cin >> t >> w)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> d[i] >> g[i];
        }
        int max_gold = f(n, t, w);
        int count = 0;
        vector < pair<int, int>> c;
        cout << max_gold << endl;

        int time = t;
        for (int i = 1; i <= n; i++) {
            if (dp[i][time] != dp[i - 1][time]) {
                ++count;
                c.push_back({d[i], g[i]});
            }
        }
        cout << count << endl;
        for (auto p : c) cout << p.first << " " << p.second << endl;
        
    }
    cout << endl;
}
