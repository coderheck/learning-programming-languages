#include<stdio.h>
using namespace std;
#define ll long long 
const ll maxN=100000;
ll n,q,k,u,v,tmp,a[maxN+5],st[4*maxN+5];
void build(ll id,ll l,ll r){
  if(l==r){st[id]=a[l];return;}
  ll m=l+(r-l)/2;
  build(2*id,l,m);build(2*id+1,m+1,r);
  st[id]=st[2*id]+st[2*id+1];
}
ll getSum(ll id,ll l,ll r,ll u,ll v){
  if(u>r||v<l){return 0;}
  if(u<=l&&v>=r){return st[id];}
  ll m=l+(r-l)/2;
  return getSum(2*id,l,m,u,v)+getSum(2*id+1,m+1,r,u,v);
}
void upd(ll id,ll l,ll r,ll i,ll val){
  if(i<l||i>r){return;}
  if(l==r){st[id]=val;return;}
  ll m=l+(r-l)/2;
  upd(2*id,l,m,i,val);upd(2*id+1,m+1,r,i,val);
  st[id]=st[2*id]+st[2*id+1];
}
int main(){
  scanf("%lld%lld",&n,&q);
  for(ll i=1;i<=n;i++){scanf("%lld",&a[i]);}
  build(1,1,n);
  while(q--){
    scanf("%lld%lld%lld",&k,&u,&v);
    if(k&1){
      printf("%lld\n",getSum(1,1,n,u,v));
    }else{
      tmp=a[u];a[u]=a[v];a[v]=tmp;
      upd(1,1,n,u,a[u]);upd(1,1,n,v,a[v]);
    }
  }
}
