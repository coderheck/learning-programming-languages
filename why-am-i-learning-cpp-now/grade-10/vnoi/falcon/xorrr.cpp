#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll maxN = 200005;
ll n, m, t, u, v, x, a[maxN], st[4*maxN];

void build(int id, int l, int r) {
    if (l == r) { st[id] = a[l]; return; }
    int mid = (l+r)/2;
    build(id<<1, l, mid);
    build(id<<1|1, mid+1, r);
    st[id] = st[id<<1] + st[id<<1|1];
}

void upd(int id, int l, int r, int u, int v, ll val) {
    if (u > r || v < l) return;
    if (l == r) {
        st[id] ^= val;
        return;
    }
    int mid = (l+r)/2;
    upd(id<<1, l, mid, u, v, val);
    upd(id<<1|1, mid+1, r, u, v, val);
    st[id] = st[id<<1] + st[id<<1|1];
}

ll query(int id, int l, int r, int u, int v) {
    if (u > r || v < l) return 0;
    if (u <= l && r <= v) return st[id];
    int mid = (l+r)/2;
    return query(id<<1, l, mid, u, v) + query(id<<1|1, mid+1, r, u, v);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i=1;i<=n;i++){cin>>a[i];}
    build(1,1,n);
    cin>>m;
    while (m--) {
        cin >> t >> u >> v;
        if(t&1){cout<<query(1,1,n,u,v)<<"\n";}else{cin>>x;upd(1,1,n,u,v,x);}
    }
}

