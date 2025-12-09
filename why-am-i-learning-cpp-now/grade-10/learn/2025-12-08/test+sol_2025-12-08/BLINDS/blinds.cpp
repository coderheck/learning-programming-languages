//Dai Ca Di Hoc
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
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
#define maxn 200005
#define MOD 1000000007
#define remain(x) if (x > MOD) x -= MOD
#define pii pair<int, int>
#define vi vector<int>
#define vii vector< pii >
#define bit(x, i) (((x) >> (i)) & 1)
#define Task "blinds"

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef long double ld;

int m,n;
int res[5];
string s[5];

void Calc(int cot){
    int type = 0;
    for (int j = 1; j < 5; j++)
        type += (s[j][cot] == '*');
    res[type]++;
}

void Tinh(){
    for (int i = 0; i < 5; i++)
        getline(cin, s[i]);
    for (int i = 1; i <= n; i++) Calc(i*5-4);
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    if(fopen(Task".inp", "r")) {
        freopen(Task".inp", "r", stdin);
        freopen(Task".out", "w", stdout);
    }
    cin >> m >> n;
    string ss;
    getline(cin,ss);
    for (int i = 1; i <= m; i++) Tinh();
    for (int i = 0; i < 5; i++) cout << res[i] << " ";
    return 0;
}

