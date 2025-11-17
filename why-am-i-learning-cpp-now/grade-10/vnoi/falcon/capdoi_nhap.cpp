#include <bits/stdc++.h>
using namespace std;
#define int long long
class fenwick
{
private:
    int n;
    vector<int> tree;

public:
    fenwick(int _n) : n(_n), tree(_n + 5) {};
    void update(int idx, int val)
    {
        for (; idx <= n; idx += idx & -idx)
            tree[idx] += val;
    }
    int sum(int idx)
    {
        int res = 0;
        for (; idx > 0; idx -= idx & -idx)
            res += tree[idx];
        return res;
    }
    int query(int l, int r)
    {
        if (l < 1)
            l = 1;
        if (r > n)
            r = n;
        if (l > r)
            return 0;
        return sum(r) - sum(l - 1);
    }
};
int n, k, res, par[100005];
vector<int> a[100005];
main()
{
    cin.tie()->sync_with_stdio(0);
    cin >> n >> k;
    for (int i = 1, u, v; i <= n - 1; i++)
    {
        cin >> u >> v;
        a[u].push_back(v);
        par[v] = true;
    }
    fenwick tree(n);
    auto dfs = [&](auto dq, int u) -> void
    {
        res += tree.query(u - k, u + k);
        tree.update(u, 1);
        for (int v : a[u])
            dq(dq, v);
        tree.update(u, -1);
    };
    int p = 1;
    while (par[p] == true)
        p++;
    dfs(dfs, p);
    cout << res;
}
