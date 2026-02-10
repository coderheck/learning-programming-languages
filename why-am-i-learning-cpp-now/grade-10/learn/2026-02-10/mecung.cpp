#include <iostream>
using namespace std;
#define tname "mecung"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
const ll maxN=85,modN=1000000007;
ll n,m,k,a[maxN][maxN],ans=0;
void backt(ll x,ll y,ll res){
    if(x<1||x>n||y<1||y>m){return;}
    res+=a[x][y];
    if(x==n&&y==m){
        if(res==k){ans=(ans+1)%modN;return;}
    }
    if(res>k){return;}
    backt(x+1,y,res);backt(x,y+1,res);
}
int main(){
    if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m>>k;
    for(ll i=1;i<=n;i++){
        for(ll j=1;j<=m;j++){cin>>a[i][j];}
    }
    backt(1,1,0);
    lout(ans);
}
