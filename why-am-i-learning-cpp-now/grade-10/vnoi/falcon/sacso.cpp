#include <iostream>
#include <vector>
using namespace std;
#define ll long long
struct sub {char d, c; ll ss, lazy;};
class segment
{
private:
    ll n;
    vector<sub> tree;
    string s;
    sub mergeNode(sub& sub1, sub& sub2)
    {
        if (!sub1.ss) {return sub2;}
        if (!sub2.ss) {return sub1;}
        sub doss;
        if (sub1.c != sub2.d) {
            doss.ss = sub1.ss + sub2.ss;
		} else {
            doss.ss = sub1.ss + sub2.ss - 1;
		}
        doss.c = sub2.c, doss.d = sub1.d, doss.lazy = 0;
        return doss;
    }

public:
    segment(ll& _n, string& x) : n(_n), tree(4 * n + 5, {'0', '0', 0, 0}) {s = x; build(1, 1, n);};
    void build(ll node, ll l, ll r)
    {
        if (l == r) {tree[node] = {s[l], s[r], 1}; return;}
        ll m = l + r >> 1;
        build(node << 1, l, m);
        build(node << 1 | 1, m + 1, r);
        tree[node] = mergeNode(tree[node << 1], tree[node << 1 | 1]);
    }
    void add(ll node, char x)
    {
        tree[node].c = tree[node].d = x;
        tree[node].ss = 1;
        tree[node].lazy = x;
    }
    void down(ll node)
    {
        if (!tree[node].lazy) {return;}
        add(node << 1, tree[node].lazy);
        add(node << 1 | 1, tree[node].lazy);
        tree[node].lazy = 0;
    }
    void update(ll node, ll l, ll r, ll u, ll v, char c)
    {
        if (l > v or r < u) {return;}
        if (l >= u and r <= v) {add(node, c); return;}
        down(node);
        ll m = l + r >> 1;
        update(node << 1, l, m, u, v, c);
        update(node << 1 | 1, m + 1, r, u, v, c);
        tree[node] = mergeNode(tree[node << 1], tree[node << 1 | 1]);
    }
    sub query(ll node, ll l, ll r, ll u, ll v)
    {
        if (l > v or r < u) {return {'0', '0', 0, 0};}
        if (l >= u and r <= v) {return tree[node];}
        down(node);
        ll m = l + r >> 1;
        sub lc = query(node << 1, l, m, u, v), 
		    rc = query(node << 1 | 1, m + 1, r, u, v);
        return mergeNode(lc, rc);
    }
};
ll n, q, l, r;
string s, type;
int main() {
	cin.tie(0)->sync_with_stdio(0);
    cin >> n >> q >> s;
    s = '0' + s;
    segment seg(n, s);
    while (q--) {
        cin >> type >> l >> r;
        if (type[0] == 'g') {
            sub res = seg.query(1, 1, n, l, r);
            cout << res.ss << '\n';
        } else {
            char x;
            cin >> x;
            seg.update(1, 1, n, l, r, x);
        }
    }
}
