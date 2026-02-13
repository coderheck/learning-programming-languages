#include <bits/stdc++.h>
using namespace std;
#define tname "bai2"

using ll = long long;
const ll INF = LLONG_MAX;

int main() {
    if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname"_rac.out","w",stdout);
	}
    cin.tie(0)->sync_with_stdio(0);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    ll m;
    cin >> n >> m;

    vector<ll> a(n+1), S(n+1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        S[i] = S[i-1] + a[i];
    }

    vector<ll> dp(n+1, INF);
    dp[0] = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            if (S[i] - S[j] <= m) {
                dp[i] = min(dp[i], dp[j] + 1);
            }
        }
    }

    cout << dp[n] << "\n";
    return 0;
}
