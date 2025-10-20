/// Hãy làm Sư tử, đừng làm Nai.
/// Hãy làm thợ săn, đừng làm con mồi.
///  --- trungkien1252010@gmai.com ---
#include <bits/stdc++.h>
using namespace std;
#define kien long long
#define JAV main
#define Million 1000000
#define NT 10000000
#define MOD 1000000007
kien n, k, m, dem, f[NT + 5], a[1000000];
kien maxx, minn, vtr, ans, l, r, dp[1000000];

bool ktr(int x, int k)
{
    kien vtr = a[1];
    kien boom_limit = k;
    for (int i = 2; i <= n; i++)
    {
        if (a[i] - (x*2) > vtr)
        {
            boom_limit--;
            vtr = a[i];
        }
        if (boom_limit < 0)
        {
            return false;
        }
    }
    if (boom_limit > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void tknp()
{
    int l = 1, r = maxx / k;
    int mid, kq = -1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (ktr(mid, k) == true)
        {
            kq = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << kq;
}


JAV()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        maxx = max(maxx, a[i]);
    }
    sort (a + 1, a + n + 1);
    tknp();
}
    