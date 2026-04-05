#include <iostream>
#include <algorithm>
using namespace std;
#define tname "muasam"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" "; \
    cerr<<x<<" ";
const ll maxN=1000005;
ll n,L,R,res=1LL<<62,a[maxN];
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>L>>R;
    for(ll i=1;i<=n;i++){cin>>a[i];}
    sort(a+1,a+n+1);
    for(ll i=1;i<n;i++){
        ll t=L-a[i],pos=lower_bound(a+i+1,a+n+1,t)-a;
        if(pos<=n){
            ll sum=a[i]+a[pos];
            if(sum<=R){res=min(res,sum);}
        }
    }
    lout(res);
}
