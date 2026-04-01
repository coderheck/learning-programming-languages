#include <algorithm>
#include <iostream>
using namespace std;
#define tname "quanxe"
#define ll long long
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n";
const ll maxN=100005;
struct pos{
    ll x,y;
    bool operator<(const pos &rhs)const{return x<rhs.x;}
}a[maxN];
ll n;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(ll i=1,tm;i<=n;i++){
        cin>>a[i].x>>a[i].y;
        tm=a[i].y,a[i].y=n-a[i].x+1,a[i].x=tm;
    }
    sort(a+1,a+n+1);
    for(ll i=1;i<=n;i++){lout(a[i].x<<" "<<a[i].y);}
}
