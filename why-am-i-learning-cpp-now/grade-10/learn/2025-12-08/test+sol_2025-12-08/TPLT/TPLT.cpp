//Dai Ca Di Hoc
#include <bits/stdc++.h>
#define sz(x) int(x.size())
#define MIN(x,y) if (x > y) x = y
#define PB push_back
#define mp make_pair
#define F first
#define S second
#define Task "tplt"
#define maxn 100005
#define MOD 1000000007
#define remain(x) if (x > MOD) x -= MOD
#define pii pair<int, int>

using namespace std;

int n, m, tplt = 0, s, t;
int tr[maxn];
bool dd[maxn];
vector<int> ke[maxn];
int q[maxn];

void nhap()
{
    //memset(a, 0, sizeof(a));
    cin >> n >> m ;
    for (int i = 1; i <= m; i++)
    {
        int u,v;
        cin >> u >> v;
        //a[u][v] = a[v][u] = 1;
        ke[u].PB(v);
        ke[v].PB(u);
    }
}

void DFS(int u)
{
    dd[u] = 1;
    for (int i = 0; i < ke[u].size(); i++)
    {
        int v = ke[u][i];
        if (dd[v] == 0)
        {
            tr[v] = u;
            DFS(v);
        }
    }
}

void BFS(int root)
{
    tplt ++;
    int l,r;
    l = r = 1;
    q[1] = root;
    dd[root] = 1;
    while (l <= r)
    {
        int u = q[l++];// pop
        for (int i = 0; i < ke[u].size(); i++)
        {
            int v = ke[u][i];
            if (dd[v]) continue;
            dd[v] = 1;
            q[++r] = v;
        }
    }
}

void tinh()
{
    memset(dd, 0 , sizeof(dd));
    for (int i = 1; i <= n; i++)
        if (dd[i] == 0) BFS(i);
}

void ghikq()
{
    cout << tplt;
   /* int luu[maxn];
    int dem = 0;
    int u = t;
    while (u != s)
    {
        luu[++dem] = u;
        u = tr[u];
    }
    cout << s << " ";
    for (int i = dem; i >= 1; i--)
        cout << luu[i] << " ";*/
}

int main()
{
	ios_base::sync_with_stdio(0);
    //freopen(Task".inp", "r", stdin);
    //freopen(Task".out", "w", stdout);
    nhap();
    tinh();
    ghikq();
    return 0;
}
