 #include <bits/stdc++.h> //damn wtf

using namespace std;

#define kien long long
#define task "MTERCHEF"
#define down cout << "\n"
#define pb push_back
#define FOR(i, a, b) for (int i = a;i <= b; i++)
#define FORD(i, a, b) for (int i = a;i >= b; i--)
#define pii pair<int, int>

const kien MOD = 1e9 + 7;
const int MXN = 1e5 + 5;

kien n, m, l, r, c, k, pre[MXN], en[MXN] , a[MXN], dem, ans, dp[MXN];
kien maxx, trace[MXN];
vector <int> vec[MXN];

void solve() {
    cin >> n >> k;

    FOR (i, 1, n) {
        cin >> a[i];
        pre[i] = pre[i - 1] + a[i];
        dp[i] = INT_MAX;
    }

    dp[0] = 0;
    FOR (i, 1, n) {
        maxx = a[i];
        FORD (j, i, 1) {
            maxx = max(maxx, a[j]);
            if (pre[i] - pre[j - 1] <= k) {
                if (dp[i] > dp[j - 1] + maxx) {
                    dp[i] = dp[j - 1] + maxx;
                    trace[i] = j;
                }
            }
            else {
                break;
            }
        }
    }

    cout << dp[n] << "\n";

    int cur = n;
    while (cur > 0) {
        dem++;
        for (int i = trace[cur]; i <= cur; i++) {
            vec[dem].pb(i);
        }
        cur = trace[cur];
        cur--;
    }

    FORD (i, dem, 1) {
        for (auto v : vec[i]) {
            cout << v << " ";
        }
        down;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    if (fopen(task".inp", "r")) {
        freopen(task".inp", "r", stdin);
        freopen(task".out", "w", stdout);
    }

    int t = 1; // cin >> t;
    while(t--) {
        solve();
    }
}
