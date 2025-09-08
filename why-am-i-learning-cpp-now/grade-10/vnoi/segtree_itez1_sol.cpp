struct segseg {
    ll n,st[maxN];
    inline void make(const vector<ll>& a)
    {
        n = a.size();
        copy(a.begin(), a.end(), st + n);
        for (ll id = n - 1; id > 0; id--) st[id] = max(st[id << 1], st[id << 1 | 1]);
    }
    inline void upd(ll u, ll val)
    {
        for (st[u += n] = val; u > 1; u >>= 1) st[u >> 1] = max(st[u], st[u ^ 1]);
    }
    inline ll fch(ll l,ll r)
    {
        ll ret=fuck;
        for (l += n, r += n; l < r; l >>= 1, r >>= 1) {
            if (l & 1) ret = max(ret, st[l++]);
            if (r & 1) ret = max(ret, st[--r]);
        }
        return ret;
    }
} tree;
ll main()
{
    ll n; cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; ++i) cin >> a[i];
    tree.build(a);

    ll q; cin >> q;
    while (q--) {
        cin >> t >> u >> v;
        if(t&1){
			tree.upd(u - 1, v);
		}else{
			cout << tree.fch(u - 1, v) << "\n";
		}
    }
}
