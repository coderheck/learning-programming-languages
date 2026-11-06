#include <bits/stdc++.h>

using namespace std;

#define kien long long
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
#define task "a"
#define fin(x) freopen(x".inp","r",stdin)
#define fou(x) freopen(x".out","w",stdout)

const int mxn = 2e5 + 5;
kien n, a[mxn];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    if (fopen(task".inp", "r")) {
        fin(task); fou(task);
    }

    cin >> n;
    FOR(i, 1, n) cin >> a[i];

    vector<int> pos, dat;

    FOR(i, 2, n) {
        if (a[i] == a[i - 1]) continue;

        pos.push_back(i);
        dat.push_back(a[i] > a[i - 1] ? 1 : -1);
    }

    vector<pair<int, int>> bad;

    for (int i = 0; i + 1 < (int)dat.size(); i++) {
        if (dat[i] == dat[i + 1]) {
            bad.push_back({pos[i], pos[i + 1]});
        }
    }

    kien ans = 0;
    int j = 0;

    FOR(i, 1, n - 1) {
        while (j < (int)bad.size() && bad[j].first <= i) {
            j++;
        }

        int r = n;

        if (j < (int)bad.size()) {
            r = bad[j].second - 1;
        }

        ans += r - i;
    }

    cout << ans << "\n";

    return 0;
}

