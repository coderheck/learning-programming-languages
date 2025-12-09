//  .............................................   .......
//  .:==========================================:..:=====..
//    .:-====================================-:..:=====-.
//      ...:::::::::::::::::::::::::-====-:....::=====:..
//          .:===================-.-====:.    .:=====:.
//             ...................-===-:.    .:====-..
//               .-===========-::====-..    .-====-.
//                 ............-====-.    ..-====:.
//                  ..:-====-.-====:..   .:-===-.
//                      ....:====-:.    .:====-..
//                        ..-===-.     .:====-.
//                          .-=-.       .:-=:.
//                           ...          ...
//
#include<bits/stdc++.h>
#define F first
#define S second
#define pb push_back
#define Random(lf, rt) (lf + rand() % (rt - lf + 1))
#define reset(x) memset(x, (int)0, sizeof x)
#define pii pair<int, int>
#define FOR(i, a, b) for(int i = (a); i <= (b); i++)
#define FORD(i, a, b) for(int i = (a); i >= b; i--)
#define bit(x, i) ((x >> i) & 1)
#define all(x) x.begin(), x.end()
#define maxn (int)3000005
#define mod (int)123456789
#define eps 1e-10
#define Task "cdiv"

using namespace std;
typedef long long ll;
typedef long double ld;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
#define rd(l, r) (l + rng() % (r - l + 1))

int n;
int a[maxn];
int p[maxn];
int st[maxn], cnt[maxn];
signed main()
{
    if(fopen(Task".inp", "r")){
        freopen(Task".inp","r",stdin);
        freopen(Task".out","w",stdout);
    }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    fill(p + 2, p + maxn, 1);
    FOR(i, 2, maxn - 5){
        if(p[i]){
            st[i] = i;
            for(int j = i + i; j <= maxn - 5; j += i){
                st[j] = i;
                p[j] = 0;
            }
        }
    }
    FOR(i, 1, n){
        int x;
        cin >> x;
        while(x > 1){
            int w = st[x];
            cnt[w]++;
            x /= w;
        }
    }
    int res = 1;
    FOR(i, 2, maxn - 5) if(p[i]){
        res = (1ll * res * (cnt[i] + 1)) % mod;
    }
    cout << res << '\n';
    cerr << "\nTime elapsed: " << 1000.0 * clock() / CLOCKS_PER_SEC << " ms.\n";
    return 0;
}
