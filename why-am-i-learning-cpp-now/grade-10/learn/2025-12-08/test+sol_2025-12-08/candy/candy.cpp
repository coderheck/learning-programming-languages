#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

int n, k;
long long f[11][1001][1001];
long long g[11][1001][1001];

long long F[11][100002], G[11][100002];


int Tong(int x, int y){
    x += y;
    if (x >= MOD) x -= MOD;
    return x;
}


long long Tinh(int sum, int k, int xmin){
    //tong sum, k em, moi em > xmin keo
    if (k == 1) return 1;
    if (k == 2) return (sum-1)/2 - xmin;
    long long res = 0;
    for (int x = xmin + 1; x < sum/k; x++)
        res += Tinh(sum-x, k-1, x);
    return res;
}

void DP1(){
    g[0][0][0] = f[0][0][0] = 1;
    for (int x = 1; x <= n; x++)
        g[0][0][x] = 1;

    for (int i = 1; i <= k; i++)
        for (int sum = 1; sum <= n; sum++){
            for (int x = sum/i; x <= sum; x++)
                f[i][sum][x] = g[i-1][sum-x][x-1];
            g[i][sum][0] = f[i][sum][0];
            for (int x = 1; x <= n; x++)
                g[i][sum][x] = Tong(g[i][sum][x-1], f[i][sum][x]);
        }

    long long res = g[k][n][n];
    cout << res;
}


void DP2()
{
    F[1][1] = 1;
    for (int i = 2; i <= n; i++) G[1][i] = 1;
    for (int i = 2; i <= k; i++)
        for (int j = i; j <= n; j++){
            G[i][j] = Tong(F[i][j-i], G[i][j-i]);
            F[i][j] = Tong(G[i-1][j-i], F[i-1][j-i]);
        }
    cout << Tong(F[k][n], G[k][n]);
}

void DP3()
{
    n = n - (k-1)*k/2;
    for (int i = 1; i <= n; i++) F[1][i] = 1;
    for (int i = 2; i <= k; i++){
        for (int j = i; j <= n; j++)
            F[i][j] = Tong(F[i-1][j-1], F[i][j-i]);
    }

    cout << F[k][n];
}

int main()
{
    //freopen("candy.inp", "r", stdin);
    //freopen("candy.out", "w", stdout);
    cin >> n >> k;
    //cout << Tinh(n,k,0);
    DP3();
    return 0;
}

//n <= 1000;
//k <= 10;



