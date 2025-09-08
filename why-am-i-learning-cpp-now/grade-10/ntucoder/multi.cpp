#include <iostream>
using namespace std;
#define ll long long 
const ll maxN=100005;
const ll fuck=1000000007;
ll n,m,u,v,a[maxN],st[4*maxN];
void make(const ll& id,const ll& l,const ll& r){
  if(l==r){st[id]=a[l];return;}
  ll m=l+r>>1;
  make(2*id,l,m);
  make(2*id+1,m+1,r);
  st[id]=st[2*id]*st[2*id+1];
}
ll quer(const ll& id,const ll& l,const ll& r,const ll& u,const ll& v){
  if(u>r||v<l){return fuck;}
  if(u<=l&&v>=r){return st[id];}
  ll m=l+r>>1,ret=1LL;
  ll r1=quer(2*id,l,m,u,v),r2=quer(2*id+1,m+1,r,u,v);
  if(r1!=fuck){ret*=r1;}
  if(r2!=fuck){ret*=r2;}
  return ret;
}
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n>>m;
  for(ll i=1;i<=n;i++){
    cin>>a[i];
    a[i]=(a[i])?((a[i]>0)?1:-1):0;
  }
  make(1,1,n);
  while(m--){
    cin>>u>>v;
    ll sign=quer(1,1,n,u,v);
    if(sign==-1){
      cout<<"-\n";
    }else if(sign==1){
      cout<<"+\n";
    }else{
      cout<<"0\n";
    }
  }
}
