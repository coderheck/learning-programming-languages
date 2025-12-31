#include <iostream>
#include <cmath>
using namespace std;
#define tname "cdsubseg"
#define ll long long
const ll maxN=1000005;
int gcd[20][maxN],n,a[maxN];
ll _gcd(const ll &a,const ll &b){return(!b)?a:_gcd(b,a%b);}
bool check(const int &x) {
    int log=__lg(x);
    for(int i=1;i+x-1<=n;i++) {
        if(_gcd(gcd[log][i], gcd[log][i+x-(1<<log)])>1) {
            return true;
        }
    }
    return false;
}
void solve() {
    cin>>n;
    for(int i=1;i<=n;i++) {
        cin>>a[i];a[i]=abs(a[i]);
        gcd[0][i]=a[i];
    }
    for(int i=1;i<=__lg(n);i++) {
        for(int j=1;j+(1<<i)-1<=n;j++) {
            gcd[i][j]=_gcd(gcd[i-1][j],gcd[i-1][j+(1<<(i-1))]);
        }
    }
    int l=1,r=n,res=0;
    while(l<=r){
        int m=l+r>>1;
		if(check(m)){res=m,l=m+1;}else{r=m-1;}
    }
    cout<<res;
}
int main() {
    if(fopen(tname".inp", "r")) {
        freopen(tname".inp", "r", stdin);
        freopen(tname".out", "w", stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    int tc=1;
    cin>>tc;
    while(tc--) {
        solve();
        cout<<'\n';
    }
}
