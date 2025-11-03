#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
const ll MAX = 5e4 + 5, INF = 0x3f3f3f3f;

struct FenwickTree {
    ll n;
    vector <ll> bit;
    FenwickTree() {}
    FenwickTree(ll n): n(n), bit(n + 1, 0) {}

    void update_up(ll u, ll v) {
        for (; u <= n; u += u & -u) bit[u] = max(bit[u], v);
    }
    void update_down(ll u, ll v) {
        for (; u; u -= u & -u) bit[u] = max(bit[u], v);
    }
    ll query_up(ll u) {
        ll ans = 0;
        for (; u <= n; u += u & -u) ans = max(ans, bit[u]);
        return ans;
    }
    ll query_down(ll u) {
        ll ans = 0;
        for (; u; u -= u & -u) ans = max(ans, bit[u]);
        return ans;
    }

    ll ask(ll id, ll u) {
        if (id % 2) return query_down(u);
        return query_up(u);
    }
    void where_update(ll id, ll u, ll v) {
        if (id & 1) {
			update_up(u, v);
		} else {
			update_down(u, v);
		}
    }
};

ll arr[MAX];

ll compress(ll n) {
    vector<ll> res(arr + 1, arr + n + 1);
    sort(res.begin(), res.end());
    res.resize(unique(res.begin(), res.end()) - res.begin());

    for (ll i = 1; i <= n; ++i){
		arr[i] = lower_bound(res.begin(), res.end(), arr[i]) - res.begin() + 1;
	}
    return res.size();
}

ll dp[5][MAX],ans=0,n;
int main() {
    cin.tie(0)->sync_with_stdio(0);
    if (fopen("hoatiet.inp", "r")) {
        freopen("hoatiet.inp", "r", stdin);
        freopen("hoatiet.out", "w", stdout);
    }

    cin >> n;
    for (ll i = 1; i <= n; ++i) {cin >> arr[i];}

    ll MAX_VAL = compress(n);
    vector<FenwickTree> tree(5, FenwickTree(MAX_VAL));

    for (ll id = 1; id <= 4; ++id) {
        for (ll i = 1; i <= n; ++i) {
            dp[id][i] = tree[id].ask(id, arr[i] + (id % 2 ? -1 : 1)) + 1;
            if (id > 1 and dp[id][i] <= id) dp[id][i] = 0;

            tree[id].where_update(id, arr[i], dp[id][i]);
            if (id == 1) continue;
            if (id > 2 or dp[id - 1][i] > 1)
                tree[id].where_update(id, arr[i], dp[id - 1][i]);
        }
	}
    for (ll i = 1; i <= n; ++i) {ans = max(ans, dp[4][i]);}
    cout << ans;
}
