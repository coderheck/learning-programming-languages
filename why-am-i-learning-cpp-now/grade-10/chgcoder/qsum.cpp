#include <stdio.h>
#define ll long long 
const ll maxn=1000000;
ll n,q,c,u,v,a[maxn+5],t[4LL*maxn+5];
void make(const ll& id,const ll& l,const ll& r){
  if(l==r){t[id]=a[l];return;}
  ll m=l+r>>1;
  make(2LL*id,l,m);
  make(2LL*id+1,m+1,r);
  t[id]=t[2LL*id]+t[2LL*id+1];
}
void upd(const ll& id,const ll& l,const ll& r,const ll& i,const ll& v){
  if(i<l||i>r){return;}
  if(l==r){t[id]=v;return;}
  ll m=l+r>>1;
  upd(2LL*id,l,m,i,v);
  upd(2LL*id+1,m+1,r,i,v);
  t[id]=t[2LL*id]+t[2LL*id+1];
}
ll get(const ll& id,const ll& l,const ll& r,const ll& u,const ll& v){
  if(u>r||v<l){return 0;}
  if(u<=l&&v>=r){return t[id];}
  ll m=l+r>>1;
  return get(2LL*id,l,m,u,v)+get(2LL*id+1,m+1,r,u,v);
}
int main(){
  scanf("%lld%lld",&n,&q);
  for(ll i=1;i<=n;i++){scanf("%lld",&a[i]);}
  make(1,1,n);
  while(q--){
    scanf("%lld%lld%lld",&c,&u,&v);
    if(c&1){
      upd(1,1,n,u,v);
    }else{
      printf("%lld\n",get(1,1,n,u,v));
    }
  }
}
