#include <bits/stdc++.h>
using namespace std;
const int INF = 0x3f3f3f3f;
const int MAXN = 20;
int n, k;
int c[MAXN][MAXN];
int dp[1 << MAXN];
int main() {
    scanf("%d%d", &n, &k);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &c[i][j]);
        }
    }
    memset(dp, INF, sizeof(dp));
    dp[(1 << n) - 1] = 0;  // trạng thái tất cả cốc còn nước

    for (int mask = (1 << n) - 2; mask >= 1; --mask) {
        for (int i = 0; i < n; ++i) {
            // i KHÔNG thuộc mask → i là cốc đã bị đổ đi
            if ((mask & (1 << i)) == 0) {
                int premask = mask | (1 << i);  // trạng thái trước khi đổ i

                for (int j = 0; j < n; ++j) {
                    if (mask >> j & 1) {        // j thuộc mask (cốc còn lại)
                        dp[mask] = min(dp[mask], dp[premask] + c[i][j]);
                    }
                }
            }
        }
    }  

    int ans = INF;
    for (int mask = 1; mask < (1 << n); ++mask) {
        int cnt = 0;
        for (int i = 0; i < n; ++i) {
            cnt += (mask >> i) & 1;
        }
        if (cnt == k) {
            ans = min(ans, dp[mask]);
        }
    }

    printf("%d", ans);
}
