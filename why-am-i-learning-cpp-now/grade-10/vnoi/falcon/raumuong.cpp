#include <iostream>
#include <unordered_map>
using namespace std;
#define tname "raumuong"
#define ll long long
#define umap unordered_map
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) cout<<x<<"\n";cerr<<x<<"\n";
const ll maxN=200005;
ll n,m,res1,res2,a[maxN];
umap<ll,ll>cnt;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m;res1=n+1,res2=0;
    for(ll i=1;i<=n;i++){cin>>a[i];}
    for(ll i=1,st;i<=n;i++){
        if(i&1){
            cnt[1]++,cnt[a[i]+1]--;
        }else{
            st=m-a[i];
            if(st<1){st=1;}
            cnt[st]++,cnt[m+1]--;
        }
    }
    for(ll i=1;i<=m;i++){
        cnt[i]+=cnt[i-1];
        if(cnt[i]<res1){res1=cnt[i];}
    }
    for(ll i=1;i<=m;i++){
        if(cnt[i]==res1){res2++;}
    }
    lout(res1<<" "<<res2);
}
