#include <bits/stdc++.h>
#define N 101
using namespace std;
string X, Y;
int f[N][N];
int dx[N], dy[N];
int main()
{
    freopen("lcs.inp","r",stdin);
    freopen("lcs.out","w",stdout);
    cin >> X >> Y;
    X = " " + X; Y = " " + Y;
    int m = X.size()-1, n = Y.size()-1;
    for (int i=1; i<=m; i++)
        for (int j=1; j<=n; j++)
        if (X[i] == Y[j]) f[i][j] = f[i-1][j-1] + 1;
        else f[i][j] = max(f[i-1][j],f[i][j-1]);
    int i=m, j=n;
    while (i > 0 && j > 0)
    {
        if (X[i] == Y[j])
        {
            dx[i] = 1; dy[j] = 1;
            i--; j--;
        }
        else    if (f[i][j] == f[i-1][j]) i--;
                else j--;
    }
    for (int i=1;i<=m; i++)
    if (dx[i] == 1) cout << X[i];
    cout << endl;
    for (int i=1;i<=m; i++)
    if (dx[i] == 1) cout << i << " ";
    cout << endl;
    for (int i=1;i<=n; i++)
    if (dy[i] == 1) cout << i << " ";
    return 0;
}
