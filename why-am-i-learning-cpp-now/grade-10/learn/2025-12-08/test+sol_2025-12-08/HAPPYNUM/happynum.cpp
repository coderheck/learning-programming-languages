#include <bits/stdc++.h>
#define Task "Happynum"
#define fi freopen(Task".inp", "r", stdin)
#define fo freopen(Task".out", "w", stdout)
#define MOD 1000000007
#define remain(x) if (x > MOD) x -= MOD
#define maxn 101
#define ll long long

using namespace std;

int n, k, delta, Left;
int sum, a[maxn], P[maxn][maxn][3000], Q[maxn][maxn][3000];
long long res = 0;
long long gt[maxn];
string s[maxn];

void Read()
{
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> s[i];
        for(int j = 0; j < k; j++)
            a[i] += s[i][j] - '0';
    }
}

void Prepare()
{
    gt[0] = 1;
    for (int i = 1; i <= n; i++) gt[i] = ((ll)gt[i-1] * i) % MOD;
    for(int i = 1; i <= n; i++) sum += a[i];
    memset(P, 0, sizeof(P));
    memset(Q, 0, sizeof(Q));
    int mid = sum/2;
    for (int i = 0; i <= n+1; i++)
        P[i][0][0] = Q[i][0][0] = 1;
    for (int i = 1; i <=n; i++)
        for (int j = 1; j <= i; j++)
            for (int p = 0; p <= mid; p++)
            {
                P[i][j][p] = P[i-1][j][p];
                if (p >= a[i]) P[i][j][p] += P[i-1][j-1][p-a[i]];
                remain(P[i][j][p]);
            }

    for (int i = n; i; i--)
        for (int j = 1; j <= n-i+1; j++)
            for (int p = 0; p <= mid; p++)
            {
                Q[i][j][p] = Q[i+1][j][p];
                if (p >= a[i]) Q[i][j][p] += Q[i+1][j-1][p-a[i]];
                remain(Q[i][j][p]);
            }
}

void Calc(int flag, string s)
{
    int mid = n/2;
    int center = (k & 1) ? s[k/2] - 48 : 0;
    if ((sum - center) & 1) return;
    int T = (sum - center) / 2;
    for (int i = 0; i < k/2; i++) T -= (s[i] - 48);
    if (T < 0) return;

    for (int i = 0; i <= mid; i++)
        for (int j = 0; j <= T; j++)
            res = (res + (ll)P[flag-1][i][j] * Q[flag+1][mid-i][T-j]) % MOD;
    res %= MOD;
}

int main() {
    //ios_base::sync_with_stdio(0);
    //fi;
    //fo;
    Read();
    Prepare();
    if (n & 1)
    {
        for (int i = 1; i <= n; i++) Calc(i, s[i]);
    } else
        if (sum & 1) res = 0;
            else res = P[n][n/2][sum/2];
    long long x = (gt[n/2] * gt[n/2]) % MOD;
    cout << (x * res) % MOD;
    return 0;
}
