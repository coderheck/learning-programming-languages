// #pragma GCC optimize("Ofast")
// #pragma GCC optimize("unroll-loops")
// #pragma GCC optimize("inline")

#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define fi first
#define se second
#define pii pair<ll, ll>
#define fl(i, x, y) for (ll i = (x); i <= (y); i++)
#define fr(i, x, y) for (ll i = (x); i >= (y); i--)
#define flc(i, x, y, z) for (ll i = (x); i <= (y); i += (z))
#define frc(i, x, y, z) for (ll i = (x); i >= (y); i -= (z))
#define fo(i, a) for (auto& i : (a))
#define NAME "name"

const ll N = 2e5 + 5;

ll n, q, a[N];
struct _data {
    ll val, lz1, lz2;
    _data() { val = lz1 = 0, lz2 = -1; };
} tree[N << 2];

void build(ll node, ll l, ll r) {
    if (l == r) {
        tree[node].val = a[l];
        return;
    }
    ll mid = l + r >> 1;
    build(node << 1, l, mid);
    build(node << 1 | 1, mid + 1, r);
    tree[node].val = tree[node << 1].val + tree[node << 1 | 1].val;
}
void down(ll node, ll l, ll r) {
    ll mid = l + r >> 1;
    if (tree[node].lz2 != -1) {
        tree[node << 1].val = tree[node].lz2 * (mid - l + 1);
        tree[node << 1].lz2 = tree[node].lz2;
        tree[node << 1 | 1].val = tree[node].lz2 * (r - mid);
        tree[node << 1 | 1].lz2 = tree[node].lz2;
        tree[node << 1].lz1 = tree[node << 1 | 1].lz1 = 0;
        tree[node].lz2 = -1;
    }
    if (tree[node].lz1 != 0) {
        tree[node << 1].val += tree[node].lz1 * (mid - l + 1);
        tree[node << 1].lz1 += tree[node].lz1;
        tree[node << 1 | 1].val += tree[node].lz1 * (r - mid);
        tree[node << 1 | 1].lz1 += tree[node].lz1;
        tree[node].lz1 = 0;
    }
}
void update(ll node, ll l, ll r, ll u, ll v, ll val, ll ty) {
    if (l > v or r < u)
        return;
    if (l >= u and r <= v) {
        if (ty & 1) {
            tree[node].val = (r - l + 1) * val;
            tree[node].lz2 = val;
            tree[node].lz1 = 0;
        } else {
            tree[node].val += (r - l + 1) * val;
            tree[node].lz1 += val;
        }
        return;
    }
    ll mid = l + r >> 1;
    down(node, l, r);
    update(node << 1, l, mid, u, v, val, ty);
    update(node << 1 | 1, mid + 1, r, u, v, val, ty);
    tree[node].val = tree[node << 1].val + tree[node << 1 | 1].val;
}
ll query(ll node, ll l, ll r, ll u, ll v) {
    if (l > v or r < u)
        return 0;
    if (l >= u and r <= v)
        return tree[node].val;
    ll mid = l + r >> 1;
    down(node, l, r);
    return query(node << 1, l, mid, u, v) + query(node << 1 | 1, mid + 1, r, u, v);
}
void gyat() {
    cin >> n >> q;
    fl(i, 1, n) { cin >> a[i]; }
    build(1, 1, n);
    fl(i, 1, q) {
        ll ty, a, b, x;
        cin >> ty >> a >> b;
        if (ty == 1) {
            cin >> x;
            update(1, 1, n, a, b, x, 0);
        } else if (ty == 2) {
            cin >> x;
            update(1, 1, n, a, b, x, 1);
        } else {
            cout << query(1, 1, n, a, b) << '\n';
        }
    }
}

main() {
    cin.tie(0)->sync_with_stdio(0);
    if (fopen(NAME ".inp", "r")) {
        freopen(NAME ".inp", "r", stdin);
        freopen(NAME ".out", "w", stdout);
    }
    int T = 1;
    // cin>>T;
    fl(qr, 1, T) { gyat(); }
}
    