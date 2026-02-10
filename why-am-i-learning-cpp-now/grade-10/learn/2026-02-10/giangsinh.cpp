#include <iostream>
using namespace std;
#define tname "giangsinh"
#define ll long long
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define lout(x) cout<<(x)<<"\n";cerr<<(x)<<"\n";
const ll maxN=100005;
struct node{ll val=0,mod=0;}st[maxN*4];
ll a[maxN];
void make(ll id,ll l,ll r){
    if(l==r){st[id].val=a[l];return;}
    ll m=(l+r)>>1;
    make(id<<1,l,m);make(id<<1|1,m+1,r);
    st[id].val=st[id<<1].val+st[id<<1|1].val;
}
void push(ll id,ll l,ll r){
    if(!st[id].mod){return;}
    ll t=st[id].mod;
    st[id<<1].val%=t;
    st[id<<1|1].val%=t;
    st[id<<1].mod+=t;
    st[id<<1|1].mod+=t;
    st[id].mod=0;
}
void upd2(ll id,ll l,ll r,ll u,ll v,ll w){
    if(u>r||v<l){return;}
    if(l==r){st[id].val%=w;return;}
    ll m=(l+r)>>1;
    upd2(id<<1,l,m,u,v,w);upd2(id<<1|1,m+1,r,u,v,w);
    st[id].val=st[id<<1].val+st[id<<1|1].val;
}
void upd3(ll id,ll l,ll r,ll i,ll c){
    if(i<l||i>r){return;}
    if(l==r){st[id].val=c;return;}
    ll m=(l+r)>>1;
    upd3(id<<1,l,m,i,c);upd3(id<<1|1,m+1,r,i,c);
    st[id].val=st[id<<1].val+st[id<<1|1].val;
}
ll get(ll id,ll l,ll r,ll u,ll v){
    if(u>r||v<l){return 0;}
    if(u<=l&&v>=r){return st[id].val;}
    ll m=(l+r)>>1;
    return get(id<<1,l,m,u,v)+get(id<<1|1,m+1,r,u,v);
}
ll n,m,t,x,y,w;
int main(){
    if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
    cin.tie(0)->sync_with_stdio(0);
    cin>>n>>m;
    for(ll i=1;i<=n;i++){cin>>a[i];}
    make(1,1,n);
    while(m--){
        cin>>t>>x>>y;
        if(t==1){
            lout(get(1,1,n,x,y));
        }else if(t==2){
            cin>>w;
            upd2(1,1,n,x,y,w);
        }else if(t==3){
            upd3(1,1,n,x,y);
        }
    }
}
