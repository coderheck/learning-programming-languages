#include <iostream>
using namespace std;
#define ll long long 
const ll maxN=100005;
const ll fuck=1000000007;
ll min(const ll& a,const ll& b){return(a<b)?a:b;}
ll n,m,p,r,a[maxN],st[4*maxN];
void make(ll id,ll l,ll r){
  if(l==r){st[id]=a[l];return;}
  ll m=l+r>>1;
  make(2*id,l,m);make(2*id+1,m+1,r);
  st[id]=min(st[2*id],st[2*id+1]);
}
ll quer(ll id,ll l,ll r,ll u,ll v){
  if(u>r||v<l){return fuck;}
  if(u<=l&&v>=r){return st[id];}
  ll m=l+r>>1;
  return min(quer(2*id,l,m,u,v),quer(2*id+1,m+1,r,u,v));
}
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n>>m;
  for(ll i=1;i<=n;i++){cin>>a[i];}
  make(1,1,n);
  while(m--){
    cin>>p>>r;
    cout<<quer(1,1,n,p,r)<<"\n";
  }
}
