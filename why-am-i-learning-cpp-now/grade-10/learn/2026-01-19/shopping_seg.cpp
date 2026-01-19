#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ll long long
#define tname "shopping"
#define txp(x) (1LL<<(x))
const ll maxN=200005;
ll n,m,a[maxN];
struct seg{
    vector<ll>st;
    seg(const ll &sz){st.resize(sz*4);}
    void init(const ll &id,const ll &l,const ll &r){
        if(l==r){st[id]=a[l];return;}
        ll m=l+r>>1;
        init(id<<1,l,m);init(id<<1|1,m+1,r);
        st[id]=min(st[id<<1],st[id<<1|1]);
    }
    ll quer(const ll &id,const ll &l,const ll &r,const ll &u,const ll &v,const ll &mm){
        if(u>r||v<l||st[id]>mm){return -1;}
        if(l==r){return l;}
        ll m=l+r>>1;
        ll lr=quer(id<<1,l,m,u,v,mm);
        if(lr!=-1){return lr;}
        return quer(id<<1|1,m+1,r,u,v,mm);
    }
};
int main(){
    if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m;
    for(ll i=1;i<=n;i++){cin>>a[i];}
    seg seg(n+5);
    seg.init(1,1,n);
    while(m--){
        ll t,l,r;cin>>t>>l>>r;
        while(t>0){
            ll pos=seg.quer(1,1,n,l,r,t);
            if(pos==-1){break;}
            t%=a[pos];
            l=pos+1;
            if(l>r){break;}
        }
        cout<<t<<"\n";
        cerr<<t<<"\n";
    }
}
