#include <iostream>
#include <vector>
using namespace std;
#define tname "fibseq"
#define ll long long
const ll modN=1000000007;
ll n,q;
ll f[200005];
struct node{ll s0=0,s1=0,laz=0;};
struct seg{
    vector<node>st;
    seg(const ll &sz){st.resize(sz*4+5);make();}
    void make(ll id=1,ll l=1,ll r=n){
        st[id]={0,r-l+1,0};
        if(l==r){return;}
        ll m=(l+r)>>1;
        make(id<<1,l,m);make(id<<1|1,m+1,r);
    }
    void app(const ll &id,ll d){
        ll s0=st[id].s0,s1=st[id].s1;
        st[id]={
            (f[d-1]*s0+f[d]*s1)%modN,
            (f[d]*s0+f[d+1]*s1)%modN,
            (st[id].laz+d)%modN
        };
    }
    void psh(const ll &id){
        if(st[id].laz==0){return;}
        app(id<<1,st[id].laz);
        app(id<<1|1,st[id].laz);
        st[id].laz=0;
    }
    void upd(ll u,ll v,ll id=1,ll l=1,ll r=n){
        if(u>r||v<l){return;}
	    if(u<=l&&v>=r){app(id,1);return;}
        psh(id);
        ll m=(l+r)>>1;
        upd(u,v,id<<1,l,m);upd(u,v,id<<1|1,m+1,r);
        st[id]={
            .s0=(st[id<<1].s0 + st[id<<1|1].s0)%modN,
            .s1=(st[id<<1].s1 + st[id<<1|1].s1)%modN
        };
    }
    ll fch(ll u,ll v,ll id=1,ll l=1,ll r=n){
        if(u>r||v<l){return 0;}
	    if(u<=l&&v>=r){return st[id].s0;}
        psh(id);
        ll m=(l+r)>>1;
        return (fch(u,v,id<<1,l,m) + fch(u,v,id<<1|1,m+1,r))%modN;
    }
};
void makefibo(){
    f[0]=0,f[1]=1;
    ll i=2;
    while(i<=200000){ // số k lớn nhất == 200000 vì n+q <= 200000
        f[i]=(f[i-1]+f[i-2])%modN;
        i++;
    }
}
int main(){
    if(fopen(tname".inp","r")){
        freopen(tname".inp","r",stdin);
        freopen(tname".out","w",stdout);
    }
    cin.tie(0)->sync_with_stdio(0);
    makefibo();
    cin>>n>>q;
    seg falcon(n);
    while(q--){
        char t;ll u,v;
        cin>>t>>u>>v;
        if(t=='D'){
            falcon.upd(u,v);
        }else{
            cout<<falcon.fch(u,v)<<"\n";
        }
    }
}
