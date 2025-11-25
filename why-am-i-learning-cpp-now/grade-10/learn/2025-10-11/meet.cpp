#include <iostream>
#include <cmath>
#include <algorithm>
#include <utility>
using namespace std;
#define ll long long 
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
const ll maxN=100005;
ll n,q,d[maxN],x[maxN],y[maxN],z;bool asc=true;
int main(){
    if(fopen("meet.inp","r")){
        freopen("meet.inp","r",stdin);
        freopen("meet.out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>q;
    for(ll i=1;i<=n;i++){cin>>d[i];if(i>1){asc=asc&&(d[i]>d[i-1]);}}
    for(ll i=1;i<=q;i++){cin>>x[i]>>y[i];}
    if(n<=100&&q<=100){
        for(ll i=1;i<=q;i++){
            if(x[i]==y[i]){cout<<"0\n";continue;}
            z=100000000007;
            for(ll j=1;j<=n;j++){
                z=min(z,max(abs(d[x[i]]-d[j]),abs(d[y[i]]-d[j])));
            }
            cout<<z<<"\n";
        }
    }else{
        ll a[maxN];
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
            cout<<z<<"\n";
        }
    }
}
