#include <iostream>
using namespace std;
#define tname "cau4"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    cerr<<x<<"\n";
const ll maxN=100005;
ll n,a[maxN];
struct ans{ll res,mn,mx;};
// res: max a[j]-a[i] của đoạn
// mn: min a[i] của đoạn
// mx: max a[i] của đoạn
ans solve(const ll *a,const ll &l,const ll &r){
    if(l==r){return{0,a[l],a[l]};}
    ll m=(l+r)>>1;
    ans th1=solve(a,l,m),th2=solve(a,m+1,r);
    ll th3=max(th1.mx,th2.mx)-min(th1.mn,th2.mn);
    lout(l<<" "<<r);
    return{
        th1.res+th2.res+th3,
        min(th1.mn,th2.mn),
        max(th1.mx,th2.mx)
    };
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(ll i=1;i<=n;i++){cin>>a[i];}
    lout(solve(a,1,n).res);
}
