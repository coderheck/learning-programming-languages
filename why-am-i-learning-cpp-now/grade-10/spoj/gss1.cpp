#include<iostream>
#define ll long long 
const ll maxn=50000;
const ll fuck=15008;
ll n,m,x,y,a[maxn+5],t[maxn*4+5];
ll max(const ll& a,const ll& b){return(a>b)?a:b;}
void swap(ll& a,ll& b){
  ll t=a;
  a=b;b=t;
}
void make(ll id,ll l,ll r){
  if(l==r){t[id]=a[l];return;}
  ll m=l+r>>1;
  make(id*2,l,m);
  make(id*2+1,m+1,r);
  t[id]=max(t[id*2],t[id*2+1]);
}
ll quer(ll id,ll l,ll r,ll u,ll v){
  if(u>r||v<l){return -fuck;}
  if(u<=l&&v>=r){return t[id];}
  ll m=l+r>>1;
  return max(quer(id*2,l,m,u,v),quer(id*2+1,m+1,r,u,v));
}
int main(){
  std::cin.tie(0)->sync_with_stdio(0);
  std::cin>>n;
  for(ll i=1;i<=n;i++){std::cin>>a[i];}
  make(1,1,n);
  std::cin>>m;
  while(m--){
    std::cin>>x>>y;
    if(x>y){swap(x,y);}
    std::cout<<quer(1,1,n,x,y)<<"\n";
  }
}
