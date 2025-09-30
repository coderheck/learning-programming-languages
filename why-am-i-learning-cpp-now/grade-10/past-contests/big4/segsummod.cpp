#include<iostream>
using namespace std;
#define ll long long
const ll maxn=100000;
const ll mod=1000000007;
struct node{ll val=0,laz=1;}st[4*maxn+5];
void down(ll id,ll l,ll r){
  if(st[id].laz==1||l==r){return;}
  ll t=st[id].laz;
  st[2*id].val=(st[2*id].val*t)%mod;
  st[2*id].laz=(st[2*id].laz*t)%mod;
  st[2*id+1].val=(st[2*id+1].val*t)%mod;
  st[2*id+1].laz=(st[2*id+1].laz*t)%mod;
  st[id].laz=1;
}
ll n,q,t,l,r,w,a[maxn+5];
void build(ll id,ll l,ll r){
  if(l==r){st[id].val=a[l]%mod;return;}
  ll m=l+r>>1;
  build(2*id,l,m);
  build(2*id+1,m+1,r);
  st[id].val=(st[2*id].val+st[2*id+1].val)%mod;
}
void upd(ll id,ll l,ll r,ll u,ll v,ll w){
  if(u>r||v<l){return;}
  if(u<=l&&v>=r){
    st[id].val=(st[id].val*w)%mod;
    st[id].laz=(st[id].laz*w)%mod;
    return;
  }
  down(id,l,r);
  ll m=l+r>>1;
  upd(2*id,l,m,u,v,w);
  upd(2*id+1,m+1,r,u,v,w);
  st[id].val=(st[2*id].val+st[2*id+1].val)%mod;
}
ll que(ll id,ll l,ll r,ll u,ll v){
  if(u>r||v<l){return 0;}
  if(u<=l&&v>=r){return st[id].val%mod;}
  down(id,l,r);
  ll m=l+r>>1;
  return(que(2*id,l,m,u,v)+que(2*id+1,m+1,r,u,v))%mod;
}
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n>>q;
  for(ll i=1;i<=n;i++){cin>>a[i];}
  build(1,1,n);
  while(q--){
    cin>>t;
    if(t&1){
      cin>>l>>r>>w;
      upd(1,1,n,l,r,w);
    }else{
      cin>>l>>r;
      cout<<que(1,1,n,l,r)<<"\n";
    }
  }
}
