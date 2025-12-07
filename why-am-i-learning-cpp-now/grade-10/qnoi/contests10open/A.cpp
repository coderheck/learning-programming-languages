#include <bits/stdc++.h>
using namespace std;
#define ll long long
void code1(ll n)
{
    ll ans = 0;
    ll S = floor(sqrt((long double)2 * n));

    for (ll s = 2; s <= S; ++s)
    {
        ll X = s / 2;
        for (ll x = 1; x <= X; ++x)
        {
            ll y = s - x;
            if (__gcd(x, y) != 1)
                continue;

            ll denom = y * s;
            if (denom > n)
                continue;
            ans += n / denom;
        }
    }
    cout << ans;
}

// void code2(ll N)
// {
//     long long res = sqrtl(N) + sqrtl(N / 2.0L);
//     cout << res;
// }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin >> n;
    code1(n);
    // cout<<"\n";
    // code2(n);
}
