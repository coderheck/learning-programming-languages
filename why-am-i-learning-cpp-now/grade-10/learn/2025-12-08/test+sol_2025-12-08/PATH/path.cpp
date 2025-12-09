//Dai Ca Di Hoc
#include <bits/stdc++.h>
#define sz(x) int(x.size())
#define reset(x) memset(x, 0,sizeof(x))
#define MIN(x,y) if (x > (y)) x = (y)
#define MAX(x,y) if (x < (y)) x = (y)
#define PB push_back
#define mp make_pair
#define F first
#define S second
#define Task "path"
#define maxn 100005
#define MOD 1000000007
#define remain(x) if (x > MOD) x -= MOD
#define pii pair<int, int>

using namespace std;

vector <int> a[maxn];
// a[u]: vector chứa các đỉnh kề u
int n, m, s, t;

int tr[maxn];
// tr[u] đánh dấu đỉnh thăm trước khi thăm u

void DFS(int u)
{
    //for (int v : a[u]) hoặc auto v
    for (int i = 0; i < a[u].size(); i++){
        int v = a[u][i];
        if (tr[v] == 0)
        {
            tr[v] = u;
            DFS(v);
        }
    }
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
  //  freopen(Task".inp", "r", stdin);
   // freopen(Task".out", "w", stdout);
    cin >> n >> m >> s >> t;
    for (int i = 1; i <= m; i++)
    {
        int u, v, w;
        cin >> u >> v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    reset(tr);
    tr[s] = -1;
    DFS(s);
    //vector <int> res;
    if (tr[t] == 0) {
        cout << -1;
        return 0;
    }
    int res[maxn], dem = 0;
    int u = t;
    while (u != s){
        dem ++;
        res[dem] = u;
        u = tr[u];
    }
    res[++dem] = s;
    cout << dem << endl;
    for (int i = dem; i >= 1; i--) cout << res[i] << " ";
    return 0;
}

