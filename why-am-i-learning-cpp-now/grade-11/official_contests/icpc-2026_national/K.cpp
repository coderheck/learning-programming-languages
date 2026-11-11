#include <bits/stdc++.h>

#define ll long long
#define int long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define pii pair <int, int>
#define fi first
#define se second
#define task "kien"
#define pb push_back

using namespace std;
const int mxn = 1e6 + 5;
const int mod = 1e9 + 7;
const int million = 1e6;

int n, maxx, sum[mxn];
ll ans;
vector <int> vec;

int tknp (int x) {
    int l = 0, r = vec.size() - 1;
    int kq = -1;
    while (l <= r) {
        int mid = (l + r) >> 1;
        if (vec[mid] >= x) {
            r = mid - 1;
            kq = mid;
        }
        else l = mid + 1;
    }

    return kq;
}

int tknp1 (int x) {
    int l = 0, r = vec.size() - 1;
    int kq = -1;
    while (l <= r) {
        int mid = (l + r) >> 1;
        if (vec[mid] <= x) {
            l = mid + 1;
            kq = mid;
        }
        else {
            r = mid - 1;
        }
    }

    return kq;
}

void solve() {
    string s; cin >> s;
    int cur = 1;
    vec.clear();
    maxx = 0;
    FOR (i, 1, s.size() - 1) {
        if (s[i] == s[i - 1]) {
            cur++;
        }
        else {
            vec.pb(cur);
            cur = 1;
        }

        maxx = max(maxx, cur);
    }
    vec.pb(cur);
    sort (vec.begin(), vec.end());

    FOR (i, 1, vec.size()) {
        sum[i] = sum[i - 1] + vec[i - 1];
    }

    cout << s.size() << " ";

    FOR (i, 2, s.size()) {
        if (maxx < i) {
            cout << 0 << " ";
        }
        else {
            int xoa = min(i, maxx - i + 1);
            int star = tknp(i);

            ans = 0;
            ans += sum[vec.size()] - sum[star] - (i - 1) * (vec.size() - star);

            cout << ans - xoa << " ";
        }
    }

    cout << "\n";
}

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    if (fopen(task".inp", "r")) {
        freopen(task".inp", "r", stdin);
        freopen(task".out", "w", stdout);
    }
    int tt = 1; cin >> tt;
    while (tt--) {
        solve();
    }
}
