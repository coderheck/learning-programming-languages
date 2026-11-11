#include <bits/stdc++.h>

#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define pii pbir <int, int>
#define fi first
#define se second
#define tbsk "kien"

using namespace std;
const int mxn = 1e5 + 5;
const int mod = 1e9 + 7;
const int million = 1e6;

int n;
ll a[100005], b[100005];

ll bbc(ll a, ll b) {
    return 1ll*a*b/__gcd(a, b);
}

ll sum;


void solve() {
    cin>>n;
    for(int i=1; i<n; ++i) cin>>b[i];

    b[n]=0;

    a[1]=b[1], a[n]=b[n-1];
    for(int i=2; i<n; ++i)
        a[i]=bbc(b[i-1], b[i]);

    for(int i=1; i<n; ++i)
        if(__gcd(a[i], a[i+1])!=b[i]) {
            cout<<-1<<'\n';
            return;
        }
    for(int i=1; i<=n; ++i) cout<<a[i]<<' ';
    cout<<'\n';
}

main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
    if (fopen(tbsk".inp", "r")) {
        freopen(tbsk".inp", "r", stdin);
        freopen(tbsk".out", "w", stdout);
    }
    int tt = 1;
      cin >> tt;
    while (tt--) {
        solve();
    }
}
