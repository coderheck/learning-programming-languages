#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
#define ll long long
#define tname "lla"
#define ll long long
#define lout(x) \
    cout<<x<<"\n"; \
    // cerr<<x<<"\n";
const ll maxN=200005;
ll n,m,x[maxN],v[maxN],a[maxN],tz=0;
double tt[maxN];stack<ll>s;
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n;
    for(ll i=1;i<=n;i++){cin>>x[i]>>v[i];}
    cin>>m;
    for(ll i=1;i<=n;i++){
        if(v[i]==1){
            s.push(i);
        }else if(s.size()){
            ll j=s.top();s.pop(); // e- gặp e+ và tiêu biến
            double p=1.0*(x[i]-x[j])/2.0; // thời gian chính xác
            tt[tz++]=p;
        }
    }
    sort(tt,tt+tz);
    for(ll i=1,a;i<=m;i++){
        cin>>a;
        ll k=upper_bound(tt,tt+tz,1.0*a)-tt;
        lout(n-2*k);
    }
}
