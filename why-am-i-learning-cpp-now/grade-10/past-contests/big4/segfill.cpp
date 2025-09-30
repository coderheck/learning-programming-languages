#include<iostream>
using namespace std;
#define ll long long
const ll maxn=100000;
ll max(const ll& a,const ll& b){return(a>b)?a:b;}
ll min(const ll& a,const ll& b){return(a<b)?a:b;}
struct node{ll val=0,laz=-1;}st[4*maxn+5];
ll n,q,t,l,r;
void dd(ll id,ll l,ll r){
  if(st[id].laz==-1){return;}
  ll t=st[id].laz,m=l+r>>1;
  st[2*id].val=t*(m-l+1);
  st[2*id].laz=t;
  st[2*id+1].val=t*(r-m);
  st[2*id+1].laz=t;
  st[id].laz=-1;
}
void upd(ll id,ll l,ll r,ll u,ll v,ll val){
  if(u>r||v<l){return;}
  if(u<=l&&v>=r){
    st[id].val=val*(r-l+1);st[id].laz=val;
    return;
  }
  dd(id,l,r);
  ll m=l+r>>1;
  upd(2*id,l,m,u,v,val);
  upd(2*id+1,m+1,r,u,v,val);
  st[id].val=st[2*id].val+st[2*id+1].val;
}
ll quer(ll id,ll l,ll r,ll u,ll v){
  if(u>r||v<l){return 0;}
  if(u<=l&&v>=r){return st[id].val;}
  dd(id,l,r);
  ll m=l+r>>1;
  return quer(2*id,l,m,u,v)+quer(2*id+1,m+1,r,u,v);
}
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n>>q;
  while(q--){
    cin>>t>>l>>r;
    if(t==1){
      upd(1,1,n,l,r,1);
    }else if(t==0){
      upd(1,1,n,l,r,0);
    }else{
      cout<<quer(1,1,n,l,r)<<"\n";
    }
  }
}
