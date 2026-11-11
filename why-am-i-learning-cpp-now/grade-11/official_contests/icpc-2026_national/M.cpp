#include <bits/stdc++.h>

#define kien long long
#define int long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define pii pair <int, int>
#define fi first
#define se second
#define task "kien"
#define pb push_back

using namespace std;
const int mxn = 1e6 + 5;
const int mod = 1e9 + 7;
const int million = 1e6;

kien n, maxx, pp[mxn], pre[mxn], st1[4 * mxn];
kien ans, u, v, a[mxn], lazy[4 * mxn], c[mxn];
//vector <int> adj[mxn];

void build (int id, int l, int r) {
    lazy[id] = 0;
    st1[id] = 0;
    if (l == r) return;

    int mid = (l + r) >> 1;
    build(id << 1, l, mid);
    build (id << 1 | 1, mid + 1, r);
}

void push (int id) {
    if (lazy[id] == 0) return;

    lazy[id << 1] += lazy[id];
    lazy[id << 1 | 1] += lazy[id];

    st1[id << 1] += lazy[id];
    st1[id << 1 | 1] += lazy[id];

    lazy[id] = 0;
}

void update1 (int id, int l, int r, int u, int v, int val) {
    if (u > r or v < l) return;
    if (u <= l and r <= v) {
        st1[id] += val;
        lazy[id] += val;
        return;
    }
    push(id);

    int mid = (l + r) >> 1;
    update1(id << 1, l, mid, u, v, val);
    update1(id << 1 | 1, mid + 1, r, u, v, val);
    st1[id] = min(st1[id << 1], st1[id << 1 | 1]);
}

kien get1 (int id, int l, int r, int u, int v) {
    if (u > r or v < l) return INT_MAX;
    if (u <= l and r <= v) {
        return st1[id];
    }
    push(id);

    int mid = (l + r) >> 1;
    return min(get1(id << 1, l, mid, u, v), get1(id << 1 | 1, mid + 1, r, u, v));
}

void solve() {
    cin >> n;
    maxx = -1e18;
    ans = -1e18;
    FOR (i, 1, n) cin >> c[i];
    FOR (i, 1, n) pp[c[i]] = 0;
    FOR (i, 1, n) cin >> a[i], maxx = max(maxx, a[i]);
//    cout << maxx << " ";

    build(1, 1, n);

    FOR (i, 1, n) {
        if (pp[c[i]] == 0) {
            pre[i] = pre[i - 1] + a[i];

            update1(1, 1, n, i, i, pre[i]);
            ans = max(ans, pre[i] - get1(1, 1, n, 1, i - 1));
            ans = max(ans, pre[i]);
            pp[c[i]] = i;
        }
        else {
            pre[i] = pre[i - 1] - a[pp[c[i]]] + a[i];
            update1(1, 1, n, i, i, pre[i]);

            update1(1, 1, n, pp[c[i]], i - 1, -a[pp[c[i]]]);
            ans = max(ans, pre[i] - get1(1, 1, n, 1, i - 1));
            ans = max(ans, pre[i]);
            pp[c[i]] = i;
        }
    }

    cout << ans << "\n";
}

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    if (fopen(task".inp", "r")) {
        freopen(task".inp", "r", stdin);
        freopen(task".out", "w", stdout);
    }
    int tt = 1; cin >> tt;
    while (tt--) {
        solve();
    }
}
