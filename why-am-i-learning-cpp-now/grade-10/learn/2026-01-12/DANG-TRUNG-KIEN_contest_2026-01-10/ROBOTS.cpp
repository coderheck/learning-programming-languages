 #include <bits/stdc++.h> //damn wtf

using namespace std;

#define kien long long
#define int long long
#define task "ROBOTS"
#define down cout << "\n"
#define pb push_back
#define FOR(i, a, b) for (int i = a;i <= b; i++)
#define FORD(i, a, b) for (int i = a;i >= b; i--)
#define pii pair<int, int>

const kien MOD = 1e9 + 7;
const int MXN = 2e5 + 5;

kien n, m, l, r, c, k, du[MXN], dv[MXN] , a[MXN], dem, ans;
kien maxx, w;
vector <pii> dp[MXN];

void djk (int s, kien d[]) {
    priority_queue <pii, vector<pii>, greater<pii>> q;
    q.push({0, s});
    d[s] = 0;

    while (!q.empty()) {
        int u = q.top().second;
        int tmp = q.top().first;
        q.pop();

        if (tmp != d[u]) continue;

        for (auto v : dp[u]) {
            if (d[v.first] > d[u] + v.second) {
                d[v.first] = d[u] + v.second;
                q.push({d[v.first], v.first});
            }
        }
    }
}

void solve() {
    kien u, v;
    cin >> n >> m;

    FOR (i, 1, m) {
        cin >> l >> r >> w;
        dp[l].pb({r, w});
        dp[r].pb({l, w});
//        du[i] = dv[i] = INT_MAX;
    }

    FOR (i, 1, n) du[i] = dv[i] = LLONG_MAX;

    cin >> u >> v;
    djk(u, du);
    djk(v, dv);

    ans = LLONG_MAX;
    FOR (i, 1, n) {
        ans = min(ans, max(du[i], dv[i]));
    }

    cout << ans;
}

main() {
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
