 #include <bits/stdc++.h> //damn wtf

using namespace std;

#define kien long long
#define task "PRODUCT"
#define FOR(i, a, b) for (int i = a;i <= b; i++)
#define FORD(i, a, b) for (int i = a;i >= b; i--)
#define pii pair<int, int>

const kien MOD = 1e9 + 7;
const int MXN = 1e5 + 5;

kien n, m, l, r, c , a[MXN], am, ans;

void solve() {
    bool ok = false;
    cin >> n;
    FOR (i, 1, n) {
        cin >> a[i];
        if (a[i] == -1) {
            am++;
        }
        else if (a[i] != 1) {
            if (a[i] > 0) {
                ans += a[i] - 1;
            }
            else if (a[i] == 0) {
                ans++;
                ok = true;
            }
            else {
                ans += abs(a[i] + 1);
                am++;
            }
        }
    }

    if (am % 2 == 0) {
        cout << ans;
        return;
    }
    else {
        if (ok == true) {
            cout << ans;
            return;
        }
        else {
            cout << ans + 2;
            return;
        }
    }
}

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    if (fopen(task".inp", "r")) {
        freopen(task".inp", "r", stdin);
        freopen(task".out", "w", stdout);
    }

    int t = 1; // cin >> t;
    while(t--) {
        solve();
    }
}
