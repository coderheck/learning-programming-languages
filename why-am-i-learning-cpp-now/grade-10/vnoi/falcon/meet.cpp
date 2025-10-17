#include <stdio.h>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long 
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=100005;
ll n,q,d[maxN],a[maxN],x[maxN],y[maxN],z;
int main(){
    if(fopen("meet.inp","r")){
        freopen("meet.inp","r",stdin);
        freopen("meet.out","w",stdout);
    }
    scanf("%lld%lld",&n,&q);
    for(ll i=1;i<=n;i++){scanf("%lld",&d[i]);a[i]=d[i];}
    for(ll i=1;i<=q;i++){scanf("%lld%lld",&x[i],&y[i]);}
    for(ll i=1;i<=n;i++){a[i]=d[i];}
    sort(a+1,a+n+1);
    for(ll i=1;i<=q;i++){
        ll l=d[x[i]],r=d[y[i]];
        if(l>r){swap(l,r);}
        ll m=l+(r-l)/2;
        auto it=lower_bound(a+1,a+n+1,m);
        z=100000000007;
        if(it!=a+n+1){z=min(z,max(abs(l-*it),abs(r-*it)));}
        if(it!=a+1){z=min(z,max(abs(l-*(it-1)),abs(r-*(it-1))));}
        if(it+1!=a+n){z=min(z,max(abs(l-*(it+1)),abs(r-*(it+1))));}
        printf("%lld\n",z);
    }
}

