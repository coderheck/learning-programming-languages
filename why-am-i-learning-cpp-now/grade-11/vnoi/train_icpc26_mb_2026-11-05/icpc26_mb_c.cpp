#include <bits/stdc++.h>
using namespace std;

#define kien long long
#define pii pair<int, int>
#define fi first
#define se second
#define dembit(a) __builtin_popcountll(a)
#define task "a"
#define fin(x) freopen(x".inp","r",stdin)
#define fou(x) freopen(x".out","w",stdout)
#define debug(x) cout << x << " ";
#define down cout << "\n"

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

    vector<string> a(n);

    for (int i = 0; i < n; ++i) {
        int x; cin >> x;

        while (x) {
            a[i] += char('0' + x % 2);
            x /= 2;
        }

        reverse(a[i].begin(), a[i].end());
    }

    string p = a[0];

    for (int i = 1; i < n; ++i) {
        int j = 0;

        while (j < (int)p.size() && j < (int)a[i].size() && p[j] == a[i][j]) {
            ++j;
        }

        p.resize(j);
    }

    kien ans = LLONG_MAX;
    vector<int> r(n);

    for (int j = 0; j <= (kien)p.size(); ++j) {
        if (j && p[j - 1] != '0') continue;

        kien base = 0;

        for (int i = 0; i < n; ++i) {
            base += (int)a[i].size() - j;

            int k = j;
            while (k < (int)a[i].size() && a[i][k] == '1')
                ++k;

            r[i] = k - j;
        }

        nth_element(r.begin(), r.begin() + (n - 1) / 2, r.end());

        int t = r[(n - 1) / 2];

        kien sum = 0;

        for (int i = 0; i < n; ++i)
            sum += min(t, r[i]);

        ans = min(ans, base + 1LL * n * t - 2 * sum);
    }

    cout << ans;
}

