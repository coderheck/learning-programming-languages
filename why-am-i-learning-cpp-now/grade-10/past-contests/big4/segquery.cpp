#include<iostream>
using namespace std;
#define ll long long
const ll maxn=100000;
const ll mod=1000000007;
struct node{ll val=0,lz1=0,lz2=1;}st[4*maxn+5];
ll n,q,t,l,r,w;
void down1(ll id,ll l,ll r){
  if(st[id].lz1==0){return;}
  ll t=st[id].lz1,m=l+r>>1;
  st[2*id].val=(st[2*id].val+t*(m-l+1))%mod;
  st[2*id].lz1=(st[2*id].lz1+t)%mod;
  st[2*id+1].val=(st[2*id+1].val+t*(r-m))%mod;
  st[2*id+1].lz1=(st[2*id+1].lz1+t)%mod;
  st[id].lz1=0;
}
void down2(ll id,ll l,ll r){
  if(st[id].lz2==1||l==r){return;}
  ll t=st[id].lz2,m=l+r>>1;
  st[2*id].val=(st[2*id].val*t)%mod;
  st[2*id].lz1=(st[2*id].lz1*t)%mod;
  st[2*id].lz2=(st[2*id].lz2*t)%mod;
  st[2*id+1].val=(st[2*id+1].val*t)%mod;
  st[2*id+1].lz1=(st[2*id+1].lz1*t)%mod;
  st[2*id+1].lz2=(st[2*id+1].lz2*t)%mod;
  st[id].lz2=1;
}
void upd1(ll id,ll l,ll r,ll u,ll v,ll w){
  if(u>r||v<l){return;}
  if(u<=l&&v>=r){
    st[id].val=(st[id].val+w*(r-l+1))%mod;
    st[id].lz1=(st[id].lz1+w)%mod;
    return;
  }
  down2(id,l,r);
  down1(id,l,r);
  ll m=l+r>>1;
  upd1(2*id,l,m,u,v,w);
  upd1(2*id+1,m+1,r,u,v,w);
  st[id].val=(st[2*id].val+st[2*id+1].val)%mod;
}
void upd2(ll id,ll l,ll r,ll u,ll v,ll w){
  if(u>r||v<l){return;}
  if(u<=l&&v>=r){
    st[id].val=(st[id].val*w)%mod;
    st[id].lz1=(st[id].lz1*w)%mod;
    st[id].lz2=(st[id].lz2*w)%mod;
    return;
  }
  down2(id,l,r);
  down1(id,l,r);
  ll m=l+r>>1;
  upd2(2*id,l,m,u,v,w);
  upd2(2*id+1,m+1,r,u,v,w);
  st[id].val=(st[2*id].val+st[2*id+1].val)%mod;
}
ll que(ll id,ll l,ll r,ll u,ll v){
  if(u>r||v<l){return 0;}
  if(u<=l&&v>=r){return st[id].val%mod;}
  down2(id,l,r);
  down1(id,l,r);
  ll m=l+r>>1;
  return(que(2*id,l,m,u,v)+que(2*id+1,m+1,r,u,v))%mod;
}
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n>>q;
  while(q--){
    cin>>t;
    if(t==1){
      cin>>l>>r>>w;
      upd1(1,1,n,l,r,w);
    }else if(t==2){
      cin>>l>>r>>w;
      upd2(1,1,n,l,r,w);
    }else{
      cin>>l>>r;
      cout<<que(1,1,n,l,r)<<"\n";
    }
  }
}
