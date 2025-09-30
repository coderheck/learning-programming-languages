#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, dp[100005][4];
    cin >> n;
    dp[1][1] = dp[1][2] = dp[1][3] = 1;
    for(int i = 2; i <= n; ++i)
    {
        dp[i][1] = dp[i - 1][1] + dp[i - 1][2] + dp[i - 1][3] + 1;
        dp[i][2] = dp[i - 1][1] + dp[i - 1][2] + dp[i - 1][3] + 1;
        dp[i][3] = dp[i - 1][1] + dp[i - 1][2] + 1;
    }
    cout << dp[n][1] + dp[n][2] + dp[n][3];
}
