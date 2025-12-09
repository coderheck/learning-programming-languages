//Dai Ca Di Hoc
#include <bits/stdc++.h>
#define sz(x) int(x.size())
#define reset(x) memset(x, 0,sizeof(x))
#define Rep(i,n) for(int (i)=0;(i)<(int)(n);++(i))
#define For(i,l,u) for(int (i)=(int)(l);(i)<=(int)(u);++(i))
#define MIN(x,y) if (x > (y)) x = (y)
#define MAX(x,y) if (x < (y)) x = (y)
#define PB push_back
#define mp make_pair
#define F first
#define S second
#define maxn 100005
#define MOD 1000000007
#define remain(x) if (x > MOD) x -= MOD
#define pii pair<int, int>
#define ll long long
#define Task "hight"

using namespace std;

int n, m, s, t;
vector < pii > a[maxn];
int tr[maxn], val;

void DFS(int u)
{
    for (int i = 0; i < a[u].size(); i++){
        int v = a[u][i].F;
        int h = a[u][i].S;
        if (tr[v] == 0 && h >= val){
            tr[v] = u;
            DFS(v);
        }
    }
}

bool check(int mid){
    memset(tr, 0, sizeof(tr));
    tr[s] = -1; val = mid;
    DFS(s);
    return (tr[t] > 0);
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
    //freopen(Task".inp", "r", stdin);
    //freopen(Task".out", "w", stdout);
    cin >> n >> m >> s >> t;
    int u, v, h;
    while (m--){
        cin >> u >> v >> h;
        a[u].PB(mp(v,h));
        a[v].PB(mp(u,h));
    }
    int L = 0, R = 1000000001;
    while (R - L > 1){
        int mid = (R + L) / 2;
        if (check(mid)) L = mid;
            else R = mid;
    }
    if (L == 0){
        cout << L;
        cerr << "----------- 0 --------\n";
        return 0;
    }
    check(L);
    cout << L << endl;
    cerr << L << endl;
    vector <int> res;
    u = t;
    while (u != s){
        res.PB(u);
        u = tr[u];
    }
    res.PB(s);
    cout << res.size() << endl;
    for (int i = res.size()-1; i >=0; i--)
        cout << res[i] << " ";
    return 0;
}

