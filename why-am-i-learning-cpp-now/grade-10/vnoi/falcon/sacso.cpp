#include <iostream>
#include <string>
using namespace std;

struct node {
    char lch,rch,laz; // laz = 0 => không cần update
    int dif,len;
};

const int MAXN = 100005;
node st[4 * MAXN];
string s;

void build(int idx, int l, int r) {
    if (l == r) {
        st[idx].lch = st[idx].rch = s[l];
        st[idx].dif = 0;
        st[idx].len = 1;
        st[idx].laz = 0;
        return;
    }
    int mid = (l + r) >> 1;
    build(idx << 1, l, mid);
    build(idx << 1 | 1, mid + 1, r);
    
    st[idx].lch = st[idx << 1].lch;
    st[idx].rch = st[idx << 1 | 1].rch;
    st[idx].len = st[idx << 1].len + st[idx << 1 | 1].len;
    st[idx].dif = st[idx << 1].dif + st[idx << 1 | 1].dif;
    st[idx].dif += (st[idx << 1].rch != st[idx << 1 | 1].lch);
    st[idx].laz = 0;
}

void apply_laz(int idx, char val) {
    st[idx].lch = st[idx].rch = val;
    st[idx].dif = 0;
    st[idx].laz = val;
}

void push(int idx) {
    if (st[idx].laz) {
        apply_laz(idx << 1, st[idx].laz);
        apply_laz(idx << 1 | 1, st[idx].laz);
        st[idx].laz = 0;
    }
}

void update(int idx, int l, int r, int L, int R, char x) {
    if (L <= l && r <= R) {
        apply_laz(idx, x);
        return;
    }
    push(idx);
    int mid = (l + r) >> 1;
    if (L <= mid) update(idx << 1, l, mid, L, R, x);
    if (R > mid) update(idx << 1 | 1, mid + 1, r, L, R, x);
    
    st[idx].lch = st[idx << 1].lch;
    st[idx].rch = st[idx << 1 | 1].rch;
    st[idx].dif = st[idx << 1].dif + st[idx << 1 | 1].dif;
    st[idx].dif += (st[idx << 1].rch != st[idx << 1 | 1].lch);
}

node query(int idx, int l, int r, int L, int R) {
    if (L <= l && r <= R) {
        return st[idx];
    }
    push(idx);
    int mid = (l + r) >> 1;
    if (R <= mid) return query(idx << 1, l, mid, L, R);
    if (L > mid) return query(idx << 1 | 1, mid + 1, r, L, R);
    
    node left_node = query(idx << 1, l, mid, L, R);
    node right_node = query(idx << 1 | 1, mid + 1, r, L, R);
    
    node res;
    res.lch = left_node.lch;
    res.rch = right_node.rch;
    res.len = left_node.len + right_node.len;
    res.dif = left_node.dif + right_node.dif;
    res.dif += (left_node.rch != right_node.lch);
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, Q;
    cin >> N >> Q >> s;
    s = " " + s; 
    
    build(1, 1, N);
    
    while (Q--) {
        string op; int L, R;
        cin >> op >> L >> R;
        if (op[0] == 'g') {
            if (L == R) {
                cout << 0 << "\n";
            } else {
                node res = query(1, 1, N, L, R);
                cout << res.dif + 1 << "\n";
            }
        } else {
            char x;
            cin >> x;
            update(1, 1, N, L, R, x);
        }
    }
    
    return 0;
}


