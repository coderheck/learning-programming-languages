#include<iostream>
using namespace std;
#define ll long long
ll n,k,a[100005],res=0;
bool wire(const ll &m){
  ll wireCount=0;
  for(int i=0;i<n;i++){
    wireCount+=a[i]/m;
    if(wireCount>=k){return true;}
  }
  return false;
}
void bitchsearch(){
  // make sure the lower bound is >= 1 else we will get division by 0 error
  ll l=1,r=1000000000,m;
  while(l<=r){
    ll m=l+(r-l)/2;
    if(wire(m)){res=m;l=m+1;}else{r=m-1;}
  }
  cout<<res;
}
int main(){
  cin.tie(0)->sync_with_stdio(0);
  cin>>n>>k;
  for(int i=0;i<n;i++){cin>>a[i];}
  bitchsearch();
}