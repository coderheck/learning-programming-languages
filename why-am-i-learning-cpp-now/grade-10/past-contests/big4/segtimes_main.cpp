/* brutal seg */
#include<iostream>
using namespace std;
#define ll long long
const ll maxN=1000005;
ll min(const ll& a,const ll& b){return(a<b)?a:b;}
ll logTwo(const ll& x){
  ll r=0,x1=x;
  while(x1>>=1){r++;}
  return r;
}
ll n,m,l,r,s,t=1,a[maxN],lz[maxN],firstTime[maxN],st[4*maxN];
void init(){
  for(ll i=0;i<n;i++){st[i+n]=a[i+1];}
  for(ll i=n-1;i>0;i--){
    st[i]=min(st[i<<1],st[i<<1|1]);  // (i << 1 | 1) == (i/2 + 1)
  }
}
void apply(ll p,ll val){
  st[p]-=val;
  if(p<n){lz[p]+=val;}
}
void push(ll p){
  for(ll h=logTwo(n);h>0;h--){
    ll i=p>>h;
    if(lz[i]){
      apply(i<<1,lz[i]);
      apply(i<<1|1,lz[i]);
      lz[i]=0;
    }
  }
}
void pull(ll p){
  while(p>1){
    p>>=1;
    st[p]=min(st[p<<1],st[p<<1|1])-lz[p];
  }
}
void upd(ll l,ll r,ll val){
  l+=n;r+=n+1;
  ll u=l,v=r;
  push(u);push(v-1);
  while(l<r){
    if(l&1){apply(l++,val);}
    if(r&1){apply(--r,val);}
    l>>=1;r>>=1;
  }
  pull(u);pull(v-1);
}
ll quer(ll p){p+=n;push(p);return st[p];}
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n>>m;
  for(ll i=1;i<=n;i++){cin>>a[i];firstTime[i]=-1;}
  init();
  while(t<=m){
    cin>>l>>r>>s;
    upd(l-1,r-1,s);
    for(ll i=l;i<=r;i++){
      if(firstTime[i]==-1&&quer(i-1)<=0){firstTime[i]=t;}
    }
    t++;
  }
  for(ll i=1;i<=n;i++){cout<<firstTime[i]<<" ";}
}
