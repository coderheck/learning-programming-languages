#include <iostream>
#include <algorithm>
#include <climits>
// #include <cstdlib>
using namespace std;
#define tname "mooncake"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n";
const ll maxN=200005;
ll n,Q,x[maxN],s[maxN];
ll sexy(const ll &y,const ll &a,const ll &b){
    ll pos=upper_bound(x+1,x+n+1,y)-x-1;
    ll l=pos,r=n-pos,lsum=l*y-s[pos],rsum=(s[n]-s[pos])-r*y;
    return a*lsum+b*rsum;
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(ll i=1;i<=n;i++){cin>>x[i];}
    cin>>Q;
    sort(x+1,x+n+1);
    for(ll i=1;i<=n;i++){s[i]=s[i-1]+x[i];}
    for(ll q=1,k,a,b,res;q<=Q;q++){
        cin>>a>>b;
        k=(b*n+a+b-1)/(a+b);
        k=max(1LL,min(n,k));
        res=LLONG_MAX;
        for(ll i=max(1LL,k-2);i<=min(n,k+2);i++){
            res=min(res,sexy(x[i],a,b));
        }
        lout(res);
    }
}

/* ---- sub 1 ---- */

// for(ll q=1,a,b,y,lost,m,t,pos,lc,rc,lsum,rsum;q<=Q;q++){
//     ll residx=1,res=LLONG_MAX;
//     cin>>a>>b;
//     if(a==b){
//         m=(n+1)>>1,y=x[m],t=0;
//         for(ll i=1;i<=n;i++){t+=a*abs(y-x[i]);}
//         lout(t);
//         continue;
//     }
//     for(ll i=1;i<=n;i++){
//         y=x[i];
//         lc=i,rc=n-i,
//         lsum=lc*y-s[i],rsum=(s[n]-s[i])-rc*y,
//         lost=a*lsum+b*rsum;
//         if(lost<res){res=lost,residx=i;}
//     }
//     if(residx<n){
//         y=x[residx]+1;
//         if(y<=x[residx+1]){
//             pos=residx,lc=residx,rc=n-lc,
//             lsum=lc*y-s[pos],rsum=(s[n]-s[pos])-rc*y,
//             lost=a*lsum+b*rsum;
//             if(lost<res){res=lost;}
//         }
//     }
//     if(residx>1){
//         y=x[residx]-1;
//         if(y>=x[residx-1]){
//             pos=residx-1,lc=residx-1,rc=n-lc,
//             lsum=lc*y-s[pos],rsum=(s[n]-s[pos])-rc*y,
//             lost=a*lsum+b*rsum;
//             if(lost<res){res=lost;}
//         }
//     }
//     lout(res);
// }
