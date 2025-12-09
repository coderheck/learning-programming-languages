//Dai Ca Di Hoc
#include <bits/stdc++.h>
#define sz(x) int(x.size())
#define all(x) x.begin(),x.end()
#define reset(x) memset(x, 0,sizeof(x))
#define Rep(i,n) for(int (i)=0;(i)<(int)(n);++(i))
#define For(i,l,u) for(int (i)=(int)(l);(i)<=(int)(u);++(i))
#define MIN(x,y) if (x > (y)) x = (y)
#define MAX(x,y) if (x < (y)) x = (y)
#define PB push_back
#define mp make_pair
#define F first
#define S second
#define maxn 4005
#define MOD 1000000007
#define remain(x) if (x > MOD) x -= MOD
#define pii pair<int, int>
#define bit(x, i) (((x) >> (i)) & 1)
#define Task "board"

using namespace std;

typedef long long ll;
typedef long double ld;
int w, h, n;

int dx[4] = {0,0,-1,1};
int dy[4] = {1,-1,0,0};

struct data{
    int duoix, duoiy, trenx, treny;
};

data a[maxn];
int add[maxn];
int color[maxn][maxn];
pii q[maxn*maxn];

void Read(){
        cin >> w >> h >> n;
    vector <int> vx, vy;
    for (int i = 1; i <= n; i++){
        int x, y, z, t;
        cin >> x >> y >> z >> t;
        a[i] = {x+1, y+1, z, t};
        vx.PB(x+1); vx.PB(z);
        if (x) vx.PB(x);
        if (z < w) vx.PB(z+1);
        vy.PB(y+1); vy.PB(t);
        if (y) vy.PB(y);
        if (t < h) vy.PB(t+1);
    }
    vx.PB(1); vx.PB(w);
    vy.PB(1); vy.PB(h);
    sort(vx.begin(), vx.end());
    vx.resize(unique(vx.begin(), vx.end()) - vx.begin());
    sort(vy.begin(), vy.end());
    vy.resize(unique(vy.begin(), vy.end()) - vy.begin());
    for (int i = 1; i <= n; i++){
        a[i].duoix = lower_bound(all(vx),a[i].duoix) - vx.begin()+1;
        a[i].trenx = lower_bound(all(vx),a[i].trenx) - vx.begin()+1;

        a[i].duoiy = lower_bound(all(vy),a[i].duoiy) - vy.begin()+1;
        a[i].treny = lower_bound(all(vy),a[i].treny) - vy.begin()+1;
    }
    w = vx.size(); h = vy.size();
}

void Painting(){
    memset(color, -1, sizeof(color));
    for (int i = 1; i <= w; i++)
    {
        reset(add);
        for (int j = 1; j <= n; j++)
            if (a[j].duoix <= i && a[j].trenx >= i) add[a[j].duoiy]++, add[a[j].treny+1]--;
        int cover = 0;
        for (int j = 1; j <= h; j++){
            cover += add[j];
            color[i][j] = cover > 0;

        }
    }
}

void DFS(int u, int v){
    int L = 1, R = 1;
    color[u][v] = 2;
    q[1] = {u,v};
    while (L <= R){
        int ux = q[L].F;
        int uy = q[L++].S;
        for (int i =0; i < 4; i++){
            int vx = ux + dx[i];
            int vy = uy + dy[i];
            if (color[vx][vy] == 0) q[++R] = {vx, vy}, color[vx][vy] = 2;
        }
    }
}

void BFS(){
//    for (int i = 1; i <= w; i++)
//        for (int j = 1; j <= h; j++)
//            cout << color[i][j] << " \n"[j==h];
    int res = 0;
    For(i, 1, w)
        For (j, 1, h)
        if (color[i][j] == 0) {
            DFS(i,j);
            res ++;
        }
    cout << res;
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); 
    //freopen(Task".inp", "r", stdin);
    //freopen(Task".out", "w", stdout);
    Read();
    Painting();
    BFS();
    return 0;
}

