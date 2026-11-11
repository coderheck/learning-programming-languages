#include <bits/stdc++.h>

#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define pii pair <int, int>
#define fi first
#define se second
#define task "kien"

using namespace std;
const int mxn = 1e5 + 5;
const int mod = 1e9 + 7;
const int million = 1e6;
ll n;
bool flag[10];

    int k;
bool check(int x, int y) {
    if((x%10)*k!=(y/100)) return 0;
    fill(flag, flag+10, 0);
    while(x) {
        if(flag[x%10]) return 0;
        flag[x%10]=1;
        x/=10;
    }
    while(y) {
        if(flag[y%10]) return 0;
        flag[y%10]=1; y/=10;
    }
    return 1;
}

void solve() {
    cin >> k;

    int res=1e9;
    for(int x=100; x<=999; ++x)
        for(int y=100; y<=999; ++y)
            if(check(x, y))
                res=min(res, x+y);
    cout<<res;
}

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    if (fopen(task".inp", "r")) {
        freopen(task".inp", "r", stdin);
        freopen(task".out", "w", stdout);
    }
    int tt = 1; // cin >> tt;
    while (tt--) {
        solve();
    }
}
