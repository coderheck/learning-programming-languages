#include<stdio.h>
using namespace std;
#define ll long long 
const ll maxN=100000;
const ll fuck=1000000007;
ll min(const ll& a,const ll& b){return(a<b)?a:b;}
ll n,q,l,r,a[maxN+5],st[4*maxN+5];
void build(ll id,ll l,ll r){
  if(l==r){st[id]=a[l];return;}
  ll m=l+(r-l)/2;
  build(2*id,l,m);build(2*id+1,m+1,r);
  st[id]=min(st[2*id],st[2*id+1]);
}
ll getMin(ll id,ll l,ll r,ll u,ll v){
  if(u>r||v<l){return fuck;}
  if(u<=l&&v>=r){return st[id];}
  ll m=l+(r-l)/2;
  return min(getMin(2*id,l,m,u,v),getMin(2*id+1,m+1,r,u,v));
}
int main(){
  scanf("%lld",&n);
  for(ll i=1;i<=n;i++){scanf("%lld",&a[i]);}
  build(1,1,n);
  scanf("%lld",&q);
  while(q--){
    scanf("%lld%lld",&l,&r);
    printf("%lld\n",getMin(1,1,n,l,r));
  }
}

