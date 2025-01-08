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
kien n, k, d = 0;
kien a[100001];

int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    for (int i = 0; i < n; i++)
    {
        int vtd = lower_bound(a + i + 1, a + n, a[i] + k) - a;
        if (vtd == n or a[vtd] != a[i] + k)
        {
            continue;
        }
        int vtc = upper_bound(a + i + 1, a + n, a[i] + k) - a - 1;
        d += (vtc - vtd + 1);
    }

    cout << d << '\n';
    return 0;
}
    