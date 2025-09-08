#include<iostream>
using namespace std;
#define ll long long 
const ll maxN=1000000;
const ll fuck=-1000000007;
ll max(const ll& a,const ll& b){return(a>b)?a:b;}
struct node{ll val,laz;}st[4*maxN+5];
ll n,m,q,u,v,k,a[maxN+5];
void lazy(ll id){
  ll t=st[id].laz;
  st[2*id].val+=t;
  st[2*id].laz+=t;
  st[2*id+1].val+=t;
  st[2*id+1].laz+=t;
  st[id].laz=0;
}
void upd(ll id,ll l,ll r,ll i,ll val){
  if(i<l||i>r){return;}
  if(l==r){st[id].val+=val,st[id].laz+=val;return;}
  lazy(id);
  ll m=l+(r-l)/2;
  upd(2*id,l,m,i,val);
  upd(2*id+1,m+1,r,i,val);
  st[id].val=max(st[2*id].val,st[2*id+1].val);
}
ll get(ll id,ll l,ll r,ll u,ll v){
  if(u>r||v<l){return fuck;}
  if(u<=l&&v>=r){return st[id].val;}
  lazy(id);
  ll m=l+(r-l)/2;
  ll t1=get(2*id,l,m,u,v),t2=get(2*id+1,m+1,r,u,v);
  return max(t1,t2);
}
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n>>m;
  while(m--){
    cin>>u>>v>>k;
    upd(1,u,v,1,k);
  }
  cin>>q;
  while(q--){
    cin>>u>>v;
    cout<<get(1,1,n,u,v)<<"\n";
  }
}
