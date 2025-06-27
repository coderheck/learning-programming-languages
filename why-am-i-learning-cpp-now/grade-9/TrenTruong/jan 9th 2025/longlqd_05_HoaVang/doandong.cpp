/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
ll a[1000005];
ll ans = -inf, Min;
#define ErasLimit 1000005
bool snt[ErasLimit];
void make_sieve()
{
    snt[0] = snt[1] = 1;
    for (int i = 2; i <= sqrt(ErasLimit); i++)
        if (snt[i] == 0)
            for (int j = i * i; j <= ErasLimit; j += i)
                snt[j] = 1;
}
kien()
{
    // if(fopen(".inp","r"))
    // {
    // 	freopen(".inp","r",stdin);
    // 	freopen(".out","w",stdout);
    // }
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    make_sieve();
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (snt[i] == 0)
            ans = max(ans, a[i]);
    }
    for (int i = 1; i <= n; i++)
        a[i] = a[i - 1] + a[i];
    Min = a[1];
    for (int i = 3; i <= n; i++)
    {
        if (snt[i] == 0)
        {
            ans = max(ans, a[i] - Min);
            Min = min(Min, a[i-1]);
        }
    }
    cout << ans;
}