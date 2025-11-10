#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll INF = 1e18;
const int MAXN = 5005;

struct Edge {
    int v;
    ll w;
};

int n, m;
vector<Edge> g[MAXN];
ll dist[MAXN];
ll cnt[MAXN];

void dijkstra(int s) {
    priority_queue<pair<ll,int>, vector<pair<ll,int>>, greater<pair<ll,int>>> pq;
    dist[s] = 0;
    cnt[s] = 1;
    pq.push({0, s});

    while (!pq.empty()) {
        auto [du, u] = pq.top();
        pq.pop();
        if (du != dist[u]) continue;

        for (auto e : g[u]) {
            int v = e.v;
            ll w = e.w;
            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                cnt[v] = cnt[u];
                pq.push({dist[v], v});
            } else if (dist[v] == dist[u] + w) {
                cnt[v] += cnt[u];
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("school.inp", "r", stdin);
    freopen("school.out", "w", stdout);

    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int k, u, v;
        ll l;
        cin >> k >> u >> v >> l;
        g[u].push_back({v, l});
        if (k == 2) g[v].push_back({u, l});
    }

    for (int i = 1; i <= n; i++) {
        dist[i] = INF;
        cnt[i] = 0;
    }

    dijkstra(1);

    cout << dist[n] << " " << cnt[n];
    return 0;
}
