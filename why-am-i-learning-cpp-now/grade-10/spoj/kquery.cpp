#include<iostream>
using namespace std;
#define ll long long 
const ll maxN=30000;
ll n,q,a[maxN+5],st[4*maxN+5];
void build(ll id,ll l,ll r){
  if(l==r){st[id]=a[l]>=k;return;}
  ll m=l+r>>1;
  build(2*id,l,m);build(2*id+1,m+1,r);
  st[id]
}

int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n;
  for(ll i=1;i<=n;i++){cin>>a[i];}

}
