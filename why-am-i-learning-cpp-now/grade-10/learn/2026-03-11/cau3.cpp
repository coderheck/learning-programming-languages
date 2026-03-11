#include <iostream>
using namespace std;
#define tname "cau3"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) \
    cout<<x<<"\n"; \
    cerr<<x<<"\n";
const ll maxN=100005;
ll n,m,a[maxN];
bool check(ll k){
    for(ll i=1;i<=k;i++){
        if(a[i]>=a[n-k+i]){return false;}
    }
    return true;
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m;
    for(ll i=1;i<=n;i++){cin>>a[i];}
    sort(a+1,a+n+1);
    ll l=1,r=n>>1,res=-1,mm;
    while(l<=r){
        mm=(l+r)>>1;
        if(check(mm)){
            res=mm,l=mm+1;
        }else{
            r=mm-1;
        }
    }
    lout(res);
}
