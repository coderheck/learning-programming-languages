/// Made by Nguyễn Hữu Đạt
#include <bits/stdc++.h>
#define ll long long
#define kien main
using namespace std;
const ll inf = LLONG_MAX;
const ll mod = 1e9 + 7;
int n;
int p;
int mi[100005], a[1000005];
int ans;
int KBCGPT(int j)
{
    int l = 0, r = j - 1;
    while (l <= r)
    {
        int i = (l + r) / 2;
        if (a[j] - mi[i] >= p)
            r = i - 1;
        else
            l = i + 1;
    }
    return r + 1;
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
    cin >> n >> p;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    mi[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        ans = max(ans, i - KBCGPT(i));
        mi[i] = min(mi[i - 1], a[i]);
    }
    cout << ans;
}